#! /usr/bin/env bash
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

# Add universe
sudo apt install software-properties-common
sudo add-apt-repository universe

# Add ROS repository
sudo apt update
sudo apt install curl gnupg lsb-release
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(source /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null

# Install ROS
sudo apt update
sudo apt install ros-galactic-desktop

# Sourcing the setup script
source /opt/ros/galactic/setup.bash
echo "# For ROS 2:" >> ~/.bashrc
echo "source /opt/ros/galactic/setup.bash" >> ~/.bashrc

# Also ensure that you do not have source /opt/ros/${ROS_DISTRO}/setup.bash in your .bashrc
# *********************** (Do we need to implement it?)
# (eh para, caso tenha outro ros, n dê conflito rodando dois setup.bash)

