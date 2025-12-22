#!/bin/bash
# MRS UAV System - Local Build Script
# Run this after system dependencies are installed

set -e

# Colors
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m'

echo "========================================="
echo "MRS UAV System - Local Build"
echo "========================================="
echo ""

# Ensure PATH includes local bin
export PATH="$HOME/.local/bin:$PATH"

# Source ROS2
echo -e "${YELLOW}Sourcing ROS2 Jazzy...${NC}"
source /opt/ros/jazzy/setup.bash

# Navigate to workspace
cd ~/mrs_workspace

# Build the workspace
echo -e "${YELLOW}Building workspace...${NC}"
echo "This may take 10-30 minutes depending on your system."
echo ""

colcon build --symlink-install \
    --allow-overriding mrs_lib mrs_msgs mrs_multirotor_simulator mrs_uav_hw_api \
    --cmake-args -DCMAKE_BUILD_TYPE=Release \
    --event-handlers console_cohesion+

BUILD_RESULT=$?

echo ""
if [ $BUILD_RESULT -eq 0 ]; then
    echo -e "${GREEN}=========================================${NC}"
    echo -e "${GREEN}Build completed successfully!${NC}"
    echo -e "${GREEN}=========================================${NC}"
    echo ""
    echo "To use the workspace, run:"
    echo "  source ~/mrs_workspace/install/setup.bash"
    echo ""
    echo "To make it permanent, add to your ~/.bashrc:"
    echo "  echo 'source ~/mrs_workspace/install/setup.bash' >> ~/.bashrc"
    echo ""
    echo "Test it:"
    echo "  ros2 pkg list | grep mrs"
    echo ""
else
    echo -e "${YELLOW}=========================================${NC}"
    echo -e "${YELLOW}Build completed with errors.${NC}"
    echo -e "${YELLOW}=========================================${NC}"
    echo ""
    echo "Check the log files in ~/mrs_workspace/log/"
    echo "for details about the failed packages."
    echo ""
fi
