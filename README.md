# MRS FlightForge Workspace

This workspace contains the MRS UAV System built from source for ROS 2 Jazzy.

## Quick Start

### Automated Installation

Run the installation script:

```bash
./install_mrs_workspace.sh
```

### Manual Installation

See [INSTALLATION_GUIDE.md](INSTALLATION_GUIDE.md) for detailed step-by-step instructions.

## Workspace Contents

This workspace includes:

- **mrs_uav_core** - Core MRS libraries and packages
- **mrs_uav_modules** - Additional MRS modules
- **mrs_uav_system** - System integration packages
- **mrs_uav_deployment** - Deployment and launch configurations
- **mrs_uav_flightforge_simulator** - FlightForge simulation environment

## System Requirements

- Ubuntu 24.04 (Noble)
- ROS 2 Jazzy
- ~10 GB disk space
- 8 GB RAM recommended

## Usage

After installation, source the workspace:

```bash
source ~/mrs_workspace/install/setup.bash
```

Run the example simulation:

```bash
cd ~/mrs_workspace/install/mrs_multirotor_simulator/share/mrs_multirotor_simulator/tmux/mrs_one_drone
./start.sh
```

## Documentation

- [Installation Guide](INSTALLATION_GUIDE.md) - Complete installation instructions
- [MRS UAV System Docs](https://ctu-mrs.github.io/) - Official documentation

## Package Status

**Locally Built:** 21 packages  
**System Dependencies:** 2 packages (mrs_mpc_solvers, mrs_realsense)

All packages are built from source in this workspace except for proprietary system dependencies.

## Updating

To update all repositories and rebuild:

```bash
cd ~/mrs_workspace/src
git pull --recurse-submodules

# Rebuild
cd ~/mrs_workspace
colcon build --symlink-install --cmake-args -DCMAKE_BUILD_TYPE=Release
```

## Files

- `install_mrs_workspace.sh` - Automated installation script
- `INSTALLATION_GUIDE.md` - Detailed installation instructions
- `README.md` - This file

## Status

✅ Source code cloned (18 packages)  
✅ Gitman dependencies fetched  
✅ 4 packages built successfully  
❌ 14 packages waiting for system dependencies  

## Documentation

- [Installation Status](INSTALLATION_STATUS.md) - Current state and next steps
- [Build Instructions](BUILD_INSTRUCTIONS.md) - Detailed manual build guide
- [MRS Documentation](https://ctu-mrs.github.io/)
- [GitHub Repository](https://github.com/ctu-mrs/mrs_uav_system)
