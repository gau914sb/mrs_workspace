# Git Repository Setup Instructions

Your MRS workspace has been initialized as a Git repository. Follow these steps to push it to a remote repository.

## Quick Setup (GitHub)

### Option 1: Using GitHub CLI (gh)

```bash
# Install GitHub CLI if not already installed
sudo apt install gh

# Authenticate
gh auth login

# Create a new repository and push
cd ~/mrs_workspace
gh repo create mrs_workspace --private --source=. --remote=origin --push
```

### Option 2: Manual Setup

1. **Create a new repository on GitHub:**
   - Go to https://github.com/new
   - Repository name: `mrs_workspace`
   - Description: "MRS FlightForge UAV System Workspace"
   - Choose Private or Public
   - Do NOT initialize with README, .gitignore, or license
   - Click "Create repository"

2. **Add remote and push:**

```bash
cd ~/mrs_workspace
git remote add origin https://github.com/YOUR_USERNAME/mrs_workspace.git
git push -u origin main
```

## Alternative: GitLab

```bash
# Create repository on GitLab first, then:
cd ~/mrs_workspace
git remote add origin https://gitlab.com/YOUR_USERNAME/mrs_workspace.git
git push -u origin main
```

## Alternative: Self-hosted Git Server

```bash
cd ~/mrs_workspace
git remote add origin ssh://user@your-server.com/path/to/repos/mrs_workspace.git
git push -u origin main
```

## What's Tracked

The repository currently tracks:
- ✅ `.gitignore` - Ignore rules
- ✅ `README.md` - Main documentation
- ✅ `INSTALLATION_GUIDE.md` - Installation instructions
- ✅ `install_mrs_workspace.sh` - Automated setup script

**Not tracked** (as per .gitignore):
- `build/` - Build artifacts
- `install/` - Installed packages
- `log/` - Build logs
- `src/` - Source repositories (managed separately)

## Managing Source Repositories

The `src/` directory contains Git submodules/repositories that should be managed separately:

```bash
cd ~/mrs_workspace/src/mrs_uav_core
git status
git pull
```

## Updating Your Workspace Repository

After making changes:

```bash
cd ~/mrs_workspace
git add <files>
git commit -m "Description of changes"
git push
```

## Cloning on Another Machine

```bash
# Clone your workspace configuration
git clone https://github.com/YOUR_USERNAME/mrs_workspace.git
cd mrs_workspace

# Run the installation script
./install_mrs_workspace.sh
```

## Current Status

```bash
cd ~/mrs_workspace
git status
git log --oneline
```

## Tips

1. **Don't commit build artifacts** - They're already in .gitignore
2. **Source repos are separate** - Manage them individually
3. **Keep scripts updated** - Update installation scripts when adding new dependencies
4. **Use branches** - Create feature branches for experiments

