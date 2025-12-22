# MRS FlightForge Workspace - Installation Guide

This guide provides step-by-step instructions to set up the MRS UAV System workspace from scratch.

## Prerequisites

- Ubuntu 24.04 (Noble)
- ROS 2 Jazzy already installed
- sudo privileges

## Installation Steps

### 1. Add MRS PPA Repository

```bash
curl https://ctu-mrs.github.io/ppa2-stable/add_ppa.sh | bash
```

This adds the MRS stable PPA repository to your system.

### 2. Update Package Lists

```bash
sudo apt update
```

### 3. Install System Dependencies

```bash
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
```

**Note:** `mrs-mpc-solvers` and `mrs-realsense` are proprietary packages only available through MRS PPA (no public source code).

### 4. Install Python Tools

```bash
pip3 install --break-system-packages gitman
```

### 5. Clone MRS Repositories

```bash
# Create workspace
mkdir -p ~/mrs_workspace/src
cd ~/mrs_workspace/src

# Clone core repositories
git clone --branch ros2 https://github.com/ctu-mrs/mrs_uav_core.git
git clone --branch ros2 https://github.com/ctu-mrs/mrs_uav_modules.git
git clone --branch ros2 https://github.com/ctu-mrs/mrs_uav_system.git
git clone --branch ros2 https://github.com/ctu-mrs/mrs_uav_deployment.git
git clone --branch ros2 https://github.com/ctu-mrs/mrs_uav_flightforge_simulator.git
```

### 6. Initialize Git Submodules

```bash
cd ~/mrs_workspace/src

# Initialize submodules for all packages
cd mrs_uav_core/ros_packages && gitman install && cd ../..
cd mrs_uav_modules/ros_packages && gitman install && cd ../..
cd mrs_uav_flightforge_simulator && gitman install && cd ../..
```

### 7. Install ROS Dependencies

```bash
cd ~/mrs_workspace
source /opt/ros/jazzy/setup.bash
rosdep install --from-paths src --ignore-src -r -y
```

**Note:** Some dependencies may fail due to SSL/TLS issues. Retry individual packages if needed:
```bash
sudo apt install -y --fix-missing ros-jazzy-mrs-mpc-solvers
sudo apt install -y ros-jazzy-mrs-realsense
```

### 8. Build the Workspace

```bash
cd ~/mrs_workspace
source /opt/ros/jazzy/setup.bash
colcon build --symlink-install \
  --cmake-args -DCMAKE_BUILD_TYPE=Release \
  --allow-overriding mrs_lib mrs_msgs mrs_multirotor_simulator mrs_uav_hw_api
```

Build time: Approximately 5-10 minutes on a modern system.

### 9. Source the Workspace

```bash
source ~/mrs_workspace/install/setup.bash
```

### 10. Add to .bashrc (Optional but Recommended)

```bash
echo "source ~/mrs_workspace/install/setup.bash" >> ~/.bashrc
```

This ensures the workspace is automatically sourced in every new terminal.

## Verification

Verify all packages are installed:

```bash
source ~/mrs_workspace/install/setup.bash
ros2 pkg list | grep mrs
```

Check package locations:

```bash
ros2 pkg prefix mrs_uav_flightforge_simulator  # Should be in ~/mrs_workspace/install/
ros2 pkg prefix mrs_mpc_solvers                # Will be in /opt/ros/jazzy (system)
```

## Running the Simulation

### Option 1: From Local Workspace

```bash
cd ~/mrs_workspace/install/mrs_multirotor_simulator/share/mrs_multirotor_simulator/tmux/mrs_one_drone
./start.sh
```

### Option 2: From System Installation

```bash
cd /opt/ros/jazzy/share/mrs_multirotor_simulator/tmux/mrs_one_drone
./start.sh
```

## Workspace Structure

```
mrs_workspace/
├── src/
│   ├── mrs_uav_core/          # Core MRS libraries
│   ├── mrs_uav_modules/        # Additional modules
│   ├── mrs_uav_system/         # System integration
│   ├── mrs_uav_deployment/     # Deployment tools
│   └── mrs_uav_flightforge_simulator/  # FlightForge simulator
├── build/                      # Build artifacts
├── install/                    # Installed packages
└── log/                        # Build logs
```

## Locally Built Packages (21 total)

All packages are built from source in your workspace except:
- `mrs_mpc_solvers` (system package, proprietary)
- `mrs_realsense` (system package, proprietary)

## Troubleshooting

### SSL/TLS Errors During rosdep

If you encounter SSL errors when running `rosdep update`, retry the failed packages individually:
```bash
sudo apt install -y --fix-missing <package-name>
```

### Missing gitman Dependencies

If FlightForge simulator fails to build, ensure gitman dependencies are installed:
```bash
cd ~/mrs_workspace/src/mrs_uav_flightforge_simulator
gitman install
```

### Build Failures

Clean and rebuild:
```bash
cd ~/mrs_workspace
rm -rf build install log
colcon build --symlink-install --cmake-args -DCMAKE_BUILD_TYPE=Release
```

## Updating the Workspace

```bash
cd ~/mrs_workspace/src

# Update all repositories
cd mrs_uav_core && git pull && cd ..
cd mrs_uav_modules && git pull && cd ..
cd mrs_uav_system && git pull && cd ..
cd mrs_uav_deployment && git pull && cd ..
cd mrs_uav_flightforge_simulator && git pull && cd ..

# Update gitman dependencies
cd mrs_uav_core/ros_packages && gitman update && cd ../..
cd mrs_uav_modules/ros_packages && gitman update && cd ../..
cd mrs_uav_flightforge_simulator && gitman update && cd ../..

# Rebuild
cd ~/mrs_workspace
colcon build --symlink-install --cmake-args -DCMAKE_BUILD_TYPE=Release
```

## Additional Resources

- [MRS UAV System Documentation](https://ctu-mrs.github.io/)
- [ROS 2 Jazzy Documentation](https://docs.ros.org/en/jazzy/)
- [MRS GitHub Organization](https://github.com/ctu-mrs)
