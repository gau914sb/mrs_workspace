# MRS UAV System - Local Installation Status

## ✅ Completed Successfully

### 1. Workspace Setup
- Created ROS2 workspace at `~/mrs_workspace/`
- Organized with proper src/build/install structure

### 2. Source Code Cloned
All repositories successfully cloned locally:

**Main packages:**
- `mrs_uav_system` (ros2 branch)
- `mrs_uav_core` (ros2 branch)
- `mrs_uav_modules` (ros2 branch)

**mrs_uav_core dependencies (12 packages):**
- mrs_multirotor_simulator
- mrs_uav_state_estimators
- mrs_uav_hw_api
- mrs_lib
- mrs_msgs
- mrs_uav_controllers
- mrs_uav_managers
- mrs_uav_trackers
- mrs_uav_autostart
- mrs_uav_testing
- mrs_uav_trajectory_generation
- mrs_uav_status

**mrs_uav_modules dependencies (3 packages):**
- mrs_modules_msgs
- mrs_serial
- mrs_rviz_plugins

**Total:** 18 packages ready for building

### 3. Tools Installed (User-level)
- ✅ pip3 (installed to ~/.local/bin)
- ✅ gitman (Python package manager for git dependencies)
- ✅ PATH configured in ~/.bashrc

### 4. Build Attempt
- 4 packages built successfully:
  - mrs_msgs
  - mrs_modules_msgs
  - mrs_lib
  - mrs_rviz_plugins

## ❌ Blocked - Requires System Dependencies

The build process requires the following system packages that need sudo access:

### Required System Packages

```bash
# These need to be installed by a system administrator
sudo apt install -y \
    libncurses-dev \
    libboost-all-dev \
    libeigen3-dev \
    libopencv-dev \
    libyaml-cpp-dev \
    libomp-dev \
    libpcl-dev
```

### Current Build Error

```
CMake Error: Could NOT find Curses (missing: CURSES_LIBRARY CURSES_INCLUDE_PATH)
```

This is blocking the build of:
- mrs_uav_status
- mrs_serial (aborted due to mrs_uav_status failure)
- mrs_uav_testing (aborted due to mrs_uav_status failure)

## 📋 Next Steps

### Option 1: Request System Administrator Install Dependencies

Ask your system administrator to run:

```bash
sudo apt install -y \
    libncurses-dev \
    libboost-all-dev \
    libeigen3-dev \
    libopencv-dev \
    libyaml-cpp-dev \
    libomp-dev \
    libpcl-dev \
    ros-jazzy-pcl-conversions \
    ros-jazzy-pcl-ros \
    ros-jazzy-tf2-eigen
```

After dependencies are installed, resume building:

```bash
source /opt/ros/jazzy/setup.bash
cd ~/mrs_workspace
colcon build --symlink-install \
    --allow-overriding mrs_lib mrs_msgs mrs_multirotor_simulator mrs_uav_hw_api \
    --cmake-args -DCMAKE_BUILD_TYPE=Release
```

### Option 2: Use System-Wide Installation

If you can get sudo access temporarily, use the official installation method:

```bash
# Add MRS PPA
curl https://ctu-mrs.github.io/ppa2-stable/add_ppa.sh | bash

# Install everything
sudo apt install ros-jazzy-mrs-uav-system-full
```

**Note:** This installs system-wide to `/opt/ros/jazzy/`, not to your local workspace.

## 🔍 What You Have Now

Your local workspace at `~/mrs_workspace/` contains:
- ✅ All source code (18+ packages)
- ✅ Properly configured directory structure
- ✅ Git dependencies managed with gitman
- ✅ 4 packages successfully compiled
- ❌ Remaining 14 packages waiting for system dependencies

## 📂 Workspace Structure

```
~/mrs_workspace/
├── src/
│   ├── mrs_uav_system/
│   │   └── ros_packages/
│   │       ├── mrs_uav_system/
│   │       └── mrs_uav_system_full/
│   ├── mrs_uav_core/
│   │   └── ros_packages/
│   │       ├── .gitman/              # 12 dependencies
│   │       └── mrs_uav_core/
│   └── mrs_uav_modules/
│       └── ros_packages/
│           ├── .gitman/              # 3 dependencies
│           └── mrs_uav_modules/
├── build/                            # Build artifacts
├── install/                          # Installed packages (partial)
└── log/                              # Build logs
```

## 🚀 Usage (Once Built)

After successful build, use the workspace:

```bash
# Source ROS2 and your workspace
source /opt/ros/jazzy/setup.bash
source ~/mrs_workspace/install/setup.bash

# List available packages
ros2 pkg list | grep mrs

# Run simulations (once mrs_multirotor_simulator is built)
ros2 launch mrs_multirotor_simulator example.launch.py
```

## 📝 Notes

1. **Local Installation:** Everything is installed in your home directory (`~/mrs_workspace/`)
2. **No System Pollution:** No files installed outside your user account
3. **Gitman:** All dependencies are managed via gitman, making updates easy
4. **ROS2 Overlay:** Your workspace overlays the system ROS2 installation

## 🔧 Maintenance Commands

### Update Source Code

```bash
cd ~/mrs_workspace/src/mrs_uav_core/ros_packages
gitman update

cd ~/mrs_workspace/src/mrs_uav_modules/ros_packages
gitman update
```

### Rebuild Specific Package

```bash
cd ~/mrs_workspace
colcon build --packages-select <package_name>
```

### Clean and Rebuild

```bash
cd ~/mrs_workspace
rm -rf build/ install/ log/
colcon build --symlink-install \
    --allow-overriding mrs_lib mrs_msgs mrs_multirotor_simulator mrs_uav_hw_api \
    --cmake-args -DCMAKE_BUILD_TYPE=Release
```

## 📞 Support

- [MRS UAV System Documentation](https://ctu-mrs.github.io/)
- [GitHub Repository](https://github.com/ctu-mrs/mrs_uav_system)
- [GitHub Issues](https://github.com/ctu-mrs/mrs_uav_system/issues)
