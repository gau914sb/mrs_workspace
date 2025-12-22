#!/bin/bash
set -e

echo "========================================="
echo "MRS UAV System - Local Build Setup"
echo "========================================="
echo ""

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

# Check if ROS2 Jazzy is installed
echo -e "${YELLOW}Checking ROS2 Jazzy installation...${NC}"
if [ ! -d "/opt/ros/jazzy" ]; then
    echo -e "${RED}ROS2 Jazzy not found. Installing...${NC}"
    echo "Adding ROS2 repository..."
    sudo apt update
    sudo apt install -y software-properties-common
    sudo add-apt-repository universe -y
    sudo apt update && sudo apt install -y curl gnupg lsb-release
    
    # Add ROS2 GPG key
    sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
    
    # Add repository
    echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null
    
    sudo apt update
    sudo apt install -y ros-jazzy-desktop
else
    echo -e "${GREEN}ROS2 Jazzy found!${NC}"
fi

# Source ROS2
echo -e "${YELLOW}Sourcing ROS2 environment...${NC}"
source /opt/ros/jazzy/setup.bash

# Install build tools
echo -e "${YELLOW}Installing build dependencies...${NC}"
sudo apt install -y \
    python3-pip \
    python3-colcon-common-extensions \
    python3-rosdep \
    python3-vcstool \
    git \
    cmake \
    build-essential \
    libeigen3-dev \
    libopencv-dev \
    libyaml-cpp-dev \
    libboost-all-dev \
    libomp-dev

# Install gitman
echo -e "${YELLOW}Installing gitman...${NC}"
pip3 install gitman --break-system-packages

# Initialize rosdep
if [ ! -f "/etc/ros/rosdep/sources.list.d/20-default.list" ]; then
    echo -e "${YELLOW}Initializing rosdep...${NC}"
    sudo rosdep init
fi
rosdep update

# Navigate to workspace
cd ~/mrs_workspace/src/mrs_uav_core/ros_packages

# Fetch all submodules using gitman
echo -e "${YELLOW}Fetching mrs_uav_core dependencies with gitman...${NC}"
gitman install

# Check for mrs_uav_modules gitman file
cd ~/mrs_workspace/src
if [ -f "mrs_uav_modules/ros_packages/.gitman.yml" ]; then
    echo -e "${YELLOW}Fetching mrs_uav_modules dependencies...${NC}"
    cd mrs_uav_modules/ros_packages
    gitman install
fi

# Clone additional required repositories
echo -e "${YELLOW}Cloning additional dependencies...${NC}"
cd ~/mrs_workspace/src

# List of additional repos to clone
repos=(
    "mrs_uav_deployment"
    "mrs_uav_px4_api"
    "mrs_open_vins_core"
    "mrs_uav_flightforge_simulator"
    "mrs_uav_gazebo_simulator"
)

for repo in "${repos[@]}"; do
    if [ ! -d "$repo" ]; then
        echo "Cloning $repo..."
        git clone -b ros2 "https://github.com/ctu-mrs/$repo.git" || echo "Warning: Could not clone $repo (may not exist on ros2 branch)"
    fi
done

# Install dependencies using rosdep
echo -e "${YELLOW}Installing ROS dependencies with rosdep...${NC}"
cd ~/mrs_workspace
rosdep install --from-paths src --ignore-src -r -y || echo "Some dependencies may need manual installation"

# Build the workspace
echo -e "${YELLOW}Building the workspace...${NC}"
cd ~/mrs_workspace
colcon build --symlink-install --cmake-args -DCMAKE_BUILD_TYPE=Release

echo ""
echo -e "${GREEN}=========================================${NC}"
echo -e "${GREEN}Build complete!${NC}"
echo -e "${GREEN}=========================================${NC}"
echo ""
echo "To use the workspace, run:"
echo "  source ~/mrs_workspace/install/setup.bash"
echo ""
echo "Add this to your ~/.bashrc to make it permanent:"
echo "  echo 'source ~/mrs_workspace/install/setup.bash' >> ~/.bashrc"
echo ""
