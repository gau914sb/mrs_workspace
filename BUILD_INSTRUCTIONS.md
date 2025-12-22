# MRS UAV System - Local Build Instructions

This guide will help you build the MRS UAV System locally without using `sudo apt install`.

## Prerequisites

- Ubuntu 24.04 (Noble) or compatible
- ROS2 Jazzy
- Git

## Directory Structure

```
~/mrs_workspace/
├── src/
│   ├── mrs_uav_system/      (already cloned)
│   ├── mrs_uav_core/         (already cloned)
│   └── mrs_uav_modules/      (already cloned)
├── build/
├── install/
└── log/
```

## Option 1: Automated Setup (Recommended)

Run the provided setup script:

```bash
cd ~/mrs_workspace
./setup.sh
```

This will:
1. Check and install ROS2 Jazzy if needed
2. Install all build dependencies
3. Install gitman for dependency management
4. Fetch all submodules and dependencies
5. Install ROS dependencies with rosdep
6. Build the entire workspace

## Option 2: Manual Setup

### Step 1: Install ROS2 Jazzy

If not already installed:

```bash
# Add ROS2 repository
sudo apt update
sudo apt install -y software-properties-common curl gnupg lsb-release
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null

# Install ROS2 Jazzy
sudo apt update
sudo apt install -y ros-jazzy-desktop

# Source ROS2
source /opt/ros/jazzy/setup.bash
```

### Step 2: Install Build Dependencies

```bash
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
```

### Step 3: Install Gitman

Gitman is used by MRS to manage git dependencies:

```bash
pip3 install gitman --break-system-packages
```

### Step 4: Initialize rosdep

```bash
sudo rosdep init  # Only if not already initialized
rosdep update
```

### Step 5: Fetch Dependencies with Gitman

For `mrs_uav_core`:
```bash
cd ~/mrs_workspace/src/mrs_uav_core/ros_packages
gitman install
```

For `mrs_uav_modules`:
```bash
cd ~/mrs_workspace/src/mrs_uav_modules/ros_packages
gitman install
```

### Step 6: Clone Additional Repositories

Some packages may need to be cloned separately:

```bash
cd ~/mrs_workspace/src

# Clone additional dependencies (if available on ros2 branch)
git clone -b ros2 https://github.com/ctu-mrs/mrs_uav_deployment.git
git clone -b ros2 https://github.com/ctu-mrs/mrs_uav_px4_api.git
git clone -b ros2 https://github.com/ctu-mrs/mrs_open_vins_core.git
git clone -b ros2 https://github.com/ctu-mrs/mrs_uav_flightforge_simulator.git
git clone -b ros2 https://github.com/ctu-mrs/mrs_uav_gazebo_simulator.git

# Sensor drivers
git clone -b ros2 https://github.com/ouster-lidar/ouster-ros.git
git clone -b ros2 https://github.com/luxonis/depthai-ros.git
```

### Step 7: Install ROS Dependencies

```bash
cd ~/mrs_workspace
rosdep install --from-paths src --ignore-src -r -y
```

### Step 8: Build the Workspace

```bash
cd ~/mrs_workspace
colcon build --symlink-install --cmake-args -DCMAKE_BUILD_TYPE=Release
```

For parallel builds (faster):
```bash
colcon build --symlink-install --parallel-workers 4 --cmake-args -DCMAKE_BUILD_TYPE=Release
```

### Step 9: Source the Workspace

```bash
source ~/mrs_workspace/install/setup.bash
```

To make it permanent, add to your `~/.bashrc`:
```bash
echo 'source ~/mrs_workspace/install/setup.bash' >> ~/.bashrc
```

## Testing the Installation

After building, test with a simple example:

```bash
# Source the workspace
source ~/mrs_workspace/install/setup.bash

# Check if packages are available
ros2 pkg list | grep mrs
```

## Running Simulations

Once built, you can run the example simulation:

```bash
cd ~/mrs_workspace/install/mrs_multirotor_simulator/share/mrs_multirotor_simulator/tmux/mrs_one_drone
./start.sh
```

## Troubleshooting

### Missing Dependencies

If you get missing dependency errors during build:

1. Check if the package exists on ros2 branch
2. Try installing from apt if available: `sudo apt install ros-jazzy-<package-name>`
3. Clone the package manually from the ctu-mrs GitHub organization

### Build Errors

- Clean build: `rm -rf build/ install/ log/`
- Build specific packages: `colcon build --packages-select <package_name>`
- Check logs: `cat log/latest_build/<package_name>/stdout_stderr.log`

### Gitman Issues

If gitman fails to fetch dependencies, you can clone them manually:

```bash
cd ~/mrs_workspace/src/mrs_uav_core/ros_packages
cat .gitman.yml  # View the list of repositories
# Clone each one manually
```

## Additional Resources

- [MRS UAV System Documentation](https://ctu-mrs.github.io/)
- [ROS2 Jazzy Documentation](https://docs.ros.org/en/jazzy/)
- [GitHub Repository](https://github.com/ctu-mrs/mrs_uav_system)

## Notes

- This is a research platform that evolves rapidly
- Some packages may not be fully ported to ROS2 yet
- Check the README files in individual packages for specific requirements
- The system requires significant computational resources for simulation
