#!/bin/bash
# MRS FlightForge System Installation Script
# This script must be run by a system administrator with sudo access

set -e

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

echo "========================================="
echo "MRS FlightForge System Installation"
echo "========================================="
echo ""

# Check if running with sudo
if [ "$EUID" -ne 0 ]; then 
    echo -e "${RED}This script must be run with sudo privileges${NC}"
    echo "Please ask your system administrator to run:"
    echo "  sudo bash $0"
    exit 1
fi

# Step 1: Add MRS ROS2 PPA
echo -e "${BLUE}[1/4] Adding MRS ROS2 stable PPA...${NC}"
curl https://ctu-mrs.github.io/ppa2-stable/add_ros_ppa.sh | bash
echo -e "${GREEN}✓ MRS ROS2 PPA added${NC}"
echo ""

# Step 2: Install ROS Jazzy Desktop Full (if not already installed)
echo -e "${BLUE}[2/4] Checking ROS Jazzy installation...${NC}"
if dpkg -l | grep -q ros-jazzy-desktop-full; then
    echo -e "${GREEN}✓ ROS Jazzy Desktop Full already installed${NC}"
else
    echo -e "${YELLOW}Installing ROS Jazzy Desktop Full...${NC}"
    apt update
    apt install -y ros-jazzy-desktop-full
    echo -e "${GREEN}✓ ROS Jazzy Desktop Full installed${NC}"
fi
echo ""

# Step 3: Add MRS stable PPA
echo -e "${BLUE}[3/4] Adding MRS stable PPA...${NC}"
curl https://ctu-mrs.github.io/ppa2-stable/add_ppa.sh | bash
echo -e "${GREEN}✓ MRS stable PPA added${NC}"
echo ""

# Step 4: Install MRS UAV System
echo -e "${BLUE}[4/4] Installing MRS UAV System...${NC}"
apt update
apt install -y ros-jazzy-mrs-uav-system-full
echo -e "${GREEN}✓ MRS UAV System installed${NC}"
echo ""

# Summary
echo -e "${GREEN}=========================================${NC}"
echo -e "${GREEN}Installation completed successfully!${NC}"
echo -e "${GREEN}=========================================${NC}"
echo ""
echo "Next steps for the user:"
echo "  1. Configure ROS environment:"
echo "     echo 'source /opt/ros/jazzy/setup.bash' >> ~/.bashrc"
echo "     source ~/.bashrc"
echo ""
echo "  2. Build the local workspace:"
echo "     cd ~/mrs_workspace"
echo "     ./build_workspace.sh"
echo ""
echo "  3. Test the installation with the simulation:"
echo "     cd /opt/ros/jazzy/share/mrs_multirotor_simulator/tmux/mrs_one_drone"
echo "     ./start.sh"
echo ""
