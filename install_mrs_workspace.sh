#!/bin/bash
# MRS FlightForge Workspace - Automated Installation Script
# This script automates the installation of the MRS UAV System workspace

set -e  # Exit on any error

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

# Function to print colored messages
print_info() {
    echo -e "${GREEN}[INFO]${NC} $1"
}

print_warn() {
    echo -e "${YELLOW}[WARN]${NC} $1"
}

print_error() {
    echo -e "${RED}[ERROR]${NC} $1"
}

# Check if running on Ubuntu 24.04
print_info "Checking system requirements..."
if [ ! -f /etc/os-release ]; then
    print_error "Cannot determine OS version"
    exit 1
fi

source /etc/os-release
if [ "$VERSION_ID" != "24.04" ]; then
    print_warn "This script is designed for Ubuntu 24.04. You are running $VERSION_ID"
    read -p "Continue anyway? (y/n) " -n 1 -r
    echo
    if [[ ! $REPLY =~ ^[Yy]$ ]]; then
        exit 1
    fi
fi

# Check if ROS 2 Jazzy is installed
print_info "Checking for ROS 2 Jazzy..."
if [ ! -f /opt/ros/jazzy/setup.bash ]; then
    print_error "ROS 2 Jazzy is not installed. Please install it first."
    print_info "Visit: https://docs.ros.org/en/jazzy/Installation.html"
    exit 1
fi

# Determine workspace directory
WORKSPACE_DIR="${1:-$HOME/mrs_workspace}"
print_info "Workspace directory: $WORKSPACE_DIR"

# Add MRS PPA Repository
print_info "Adding MRS stable PPA repository..."
curl https://ctu-mrs.github.io/ppa2-stable/add_ppa.sh | bash

# Update package lists
print_info "Updating package lists..."
sudo apt update

# Install system dependencies
print_info "Installing system dependencies..."
sudo apt install -y \
    ros-jazzy-mrs-mpc-solvers \
    ros-jazzy-mrs-realsense \
    tmuxinator \
    mrs-uav-shell-additions \
    moreutils \
    ros-jazzy-ament-cmake-clang-format \
    ros-jazzy-nlopt \
    ros-jazzy-ouster-ros \
    ros-jazzy-depthai-ros \
    ros-jazzy-sophus \
    python3-pip

# Retry failed packages (in case of SSL issues)
print_info "Retrying potentially failed packages..."
sudo apt install -y --fix-missing ros-jazzy-mrs-mpc-solvers || print_warn "mrs-mpc-solvers may have failed"
sudo apt install -y ros-jazzy-mrs-realsense || print_warn "mrs-realsense may have failed"

# Install Python tools
print_info "Installing gitman..."
pip3 install --break-system-packages gitman

# Create workspace directory
print_info "Creating workspace directory..."
mkdir -p "$WORKSPACE_DIR/src"
cd "$WORKSPACE_DIR/src"

# Clone MRS repositories
print_info "Cloning MRS repositories..."

if [ ! -d "mrs_uav_core" ]; then
    print_info "Cloning mrs_uav_core..."
    git clone --branch ros2 https://github.com/ctu-mrs/mrs_uav_core.git
else
    print_warn "mrs_uav_core already exists, skipping..."
fi

if [ ! -d "mrs_uav_modules" ]; then
    print_info "Cloning mrs_uav_modules..."
    git clone --branch ros2 https://github.com/ctu-mrs/mrs_uav_modules.git
else
    print_warn "mrs_uav_modules already exists, skipping..."
fi

if [ ! -d "mrs_uav_system" ]; then
    print_info "Cloning mrs_uav_system..."
    git clone --branch ros2 https://github.com/ctu-mrs/mrs_uav_system.git
else
    print_warn "mrs_uav_system already exists, skipping..."
fi

if [ ! -d "mrs_uav_deployment" ]; then
    print_info "Cloning mrs_uav_deployment..."
    git clone --branch ros2 https://github.com/ctu-mrs/mrs_uav_deployment.git
else
    print_warn "mrs_uav_deployment already exists, skipping..."
fi

if [ ! -d "mrs_uav_flightforge_simulator" ]; then
    print_info "Cloning mrs_uav_flightforge_simulator..."
    git clone --branch ros2 https://github.com/ctu-mrs/mrs_uav_flightforge_simulator.git
else
    print_warn "mrs_uav_flightforge_simulator already exists, skipping..."
fi

# Initialize gitman dependencies
print_info "Initializing gitman dependencies..."

if [ -d "mrs_uav_core/ros_packages" ]; then
    print_info "Installing gitman for mrs_uav_core..."
    cd mrs_uav_core/ros_packages
    gitman install
    cd "$WORKSPACE_DIR/src"
fi

if [ -d "mrs_uav_modules/ros_packages" ]; then
    print_info "Installing gitman for mrs_uav_modules..."
    cd mrs_uav_modules/ros_packages
    gitman install
    cd "$WORKSPACE_DIR/src"
fi

if [ -d "mrs_uav_flightforge_simulator" ]; then
    print_info "Installing gitman for mrs_uav_flightforge_simulator..."
    cd mrs_uav_flightforge_simulator
    gitman install
    cd "$WORKSPACE_DIR/src"
fi

# Install ROS dependencies
print_info "Installing ROS dependencies with rosdep..."
cd "$WORKSPACE_DIR"
source /opt/ros/jazzy/setup.bash
rosdep install --from-paths src --ignore-src -r -y || print_warn "Some rosdep dependencies may have failed"

# Build the workspace
print_info "Building the workspace (this may take 5-10 minutes)..."
cd "$WORKSPACE_DIR"
source /opt/ros/jazzy/setup.bash
colcon build --symlink-install \
    --cmake-args -DCMAKE_BUILD_TYPE=Release \
    --allow-overriding mrs_lib mrs_msgs mrs_multirotor_simulator mrs_uav_hw_api

# Check build success
if [ $? -eq 0 ]; then
    print_info "Build completed successfully!"
else
    print_error "Build failed. Check the logs in $WORKSPACE_DIR/log"
    exit 1
fi

# Source the workspace
print_info "Sourcing the workspace..."
source "$WORKSPACE_DIR/install/setup.bash"

# Ask if user wants to add to .bashrc
print_info "Installation complete!"
echo ""
read -p "Add workspace to .bashrc for auto-sourcing? (y/n) " -n 1 -r
echo
if [[ $REPLY =~ ^[Yy]$ ]]; then
    if ! grep -q "source $WORKSPACE_DIR/install/setup.bash" ~/.bashrc; then
        echo "source $WORKSPACE_DIR/install/setup.bash" >> ~/.bashrc
        print_info "Added to .bashrc"
    else
        print_warn "Already in .bashrc"
    fi
fi

# Print verification info
print_info "Verifying installation..."
source "$WORKSPACE_DIR/install/setup.bash"
echo ""
echo "Installed MRS packages:"
ros2 pkg list | grep mrs | head -10
echo "..."
echo ""
print_info "Total MRS packages: $(ros2 pkg list | grep -c mrs)"

# Print summary
echo ""
echo "========================================"
print_info "MRS Workspace Installation Summary"
echo "========================================"
echo "Workspace: $WORKSPACE_DIR"
echo "Packages built: $(ls -1 $WORKSPACE_DIR/install | grep -c mrs)"
echo ""
echo "To use the workspace in a new terminal:"
echo "  source $WORKSPACE_DIR/install/setup.bash"
echo ""
echo "To run the example simulation:"
echo "  cd $WORKSPACE_DIR/install/mrs_multirotor_simulator/share/mrs_multirotor_simulator/tmux/mrs_one_drone"
echo "  ./start.sh"
echo ""
print_info "Happy flying! 🚁"
