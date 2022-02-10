#! /usr/bin/env bash


# |----------- ROS -----------|
echo "$0: installing ROS 2"

# Check for UTF-8 
LOCALE=`locale`
SUBLOCALE=${LOCALE:11:5}
if [ $SUBLOCALE != "UTF-8"  ]; then
    echo "$0: locale did not return UTF-8. Try, f.e.:
    sudo apt update && sudo apt install locales
    sudo locale-gen en_US en_US.UTF-8
    sudo update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
    export LANG=en_US.UTF-8
    "
    exit 0
fi

# Add universe repository
sudo apt install software-properties-common
sudo add-apt-repository universe

# Add ROS apt repository
sudo apt update
sudo apt install curl gnupg lsb-release
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(source /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null

# Install development tools and ROS tools
sudo apt update && sudo apt install -y \
  build-essential \
  cmake \
  git \
  python3-colcon-common-extensions \
  python3-flake8 \
  python3-pip \
  python3-pytest-cov \
  python3-rosdep \
  python3-setuptools \
  python3-vcstool \
  wget
# install some pip packages needed for testing
python3 -m pip install -U \
  flake8-blind-except \
  flake8-builtins \
  flake8-class-newline \
  flake8-comprehensions \
  flake8-deprecated \
  flake8-docstrings \
  flake8-import-order \
  flake8-quotes \
  pytest-repeat \
  pytest-rerunfailures \
  pytest \
  setuptools

# Get ROS2 code
mkdir -p ~/ros2_galactic/src
cd ~/ros2_galactic
wget https://raw.githubusercontent.com/ros2/ros2/galactic/ros2.repos
vcs import src < ros2.repos

# Install dependencies using rosdep
sudo rosdep init
rosdep update
rosdep install --from-paths src --ignore-src -y --skip-keys "fastcdr rti-connext-dds-5.3.1 urdfdom_headers"

# Install additional DDS implementations
sudo apt install ros-galactic-rmw-fastrtps-cpp -y

# Switch to rmw_fastrtps
export RMW_IMPLEMENTATION=rmw_fastrtps_cpp

# Build the code in the worspace
cd ~/ros2_galactic/
colcon build --symlink-install

# Environment setup
. ~/ros2_galactic/install/local_setup.bash

# |---------------------------PX4------------------------------|

## Install Gradle - download 6.3

# Unpack the distribuition
sudo mkdir /opt/gradle
sudo unzip -d /opt/gradle gradle-6.3-bin.zip
ls /opt/gradle/gradle-6.3

#Configure system environment
export PATH=$PATH:/opt/gradle/gradle-6.3/bin

# Verify installation
# gradle -v

## Foonathan memory - maybe use sudo
# cd ~/src
# git clone https://github.com/eProsima/foonathan_memory_vendor.git
# cd foonathan_memory_vendor
cd ~/ros2_galactic/src/eProsima/foonathan_memory_vendor
mkdir build && cd build
cmake ..
sudo cmake --build . --target install

## Swig for Python
sudo apt install swig

## Fast-RTPS-Gen 1.0.4
cd ~/ros2_galactic/src/eProsima
git clone --recursive https://github.com/eProsima/Fast-DDS-Gen.git -b v1.0.4
cd ~/ros2_galactic/src/eProsima/Fast-DDS-Gen
gradle assemble
sudo env "PATH=$PATH" gradle install

## Eigen3
sudo apt install ros-galactic-eigen3-cmake-module

## Python dependencies
sudo pip3 install -U empy pyros-genmsg setuptools

## PX4 repository
cd
mkdir src
cd src
git clone https://github.com/PX4/PX4-Autopilot.git --recursive
bash ./PX4-Autopilot/Tools/setup/ubuntu.sh

## run ubuntu.sh para JAVA 11

# Gazebo
curl -sSL http://get.gazebosim.org | sh


# para buildar eu usei bash build_ros2_workspace.bash --ros_distro galactic --ros_path PATH_TO_MY_WS/install/setup.bash
# sanity check done
