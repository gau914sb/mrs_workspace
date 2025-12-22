#!/bin/bash

# MRS UAV System - System Dependencies Installation Script
# This script needs to be run by a system administrator with sudo access

set -e

echo "========================================="
echo "MRS UAV System - System Dependencies"
echo "========================================="
echo ""
echo "This script installs system-level dependencies required"
echo "to build the MRS UAV System from source."
echo ""
echo "These packages will be installed system-wide and require"
echo "sudo privileges."
echo ""
read -p "Continue? (y/n) " -n 1 -r
echo
if [[ ! $REPLY =~ ^[Yy]$ ]]
then
    echo "Installation cancelled."
    exit 1
fi

echo ""
echo "Installing development libraries..."
sudo apt update
sudo apt install -y \
    libncurses-dev \
    libboost-all-dev \
    libeigen3-dev \
    libopencv-dev \
    libyaml-cpp-dev \
    libomp-dev \
    libpcl-dev \
    libgtk-3-dev \
    libglew-dev \
    libxrandr-dev \
    libxi-dev

echo ""
echo "Installing ROS2 dependencies..."
sudo apt install -y \
    ros-jazzy-pcl-conversions \
    ros-jazzy-pcl-ros \
    ros-jazzy-tf2-eigen \
    ros-jazzy-tf2-geometry-msgs \
    ros-jazzy-image-transport \
    ros-jazzy-cv-bridge

echo ""
echo "========================================="
echo "System dependencies installed!"
echo "========================================="
echo ""
echo "You can now build the workspace as a regular user:"
echo ""
echo "  cd ~/mrs_workspace"
echo "  source /opt/ros/jazzy/setup.bash"
echo "  colcon build --symlink-install \\"
echo "      --allow-overriding mrs_lib mrs_msgs mrs_multirotor_simulator mrs_uav_hw_api \\"
echo "      --cmake-args -DCMAKE_BUILD_TYPE=Release"
echo ""
