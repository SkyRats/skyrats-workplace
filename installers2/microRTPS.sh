#! /usr/bin/env bash
echo "$0: installing microRTPS"

## Get and go to this file's path
MY_PATH=`dirname "$0"`
MY_PATH=`( cd "$MY_PATH" && pwd )`
cd "$MY_PATH"

## Go to sources2/ folder
cd $MY_PATH/../sources2/

## Install additional DDS implementations
sudo apt install ros-galactic-rmw-fastrtps-cpp -y

## Switch to rmw_fastrtps
export RMW_IMPLEMENTATION=rmw_fastrtps_cpp
echo "export RMW_IMPLEMENTATION=rmw_fastrtps_cpp" >> ~/.bashrc

## Install dependencies
sudo apt install -y python3-setuptools python3-pip
sudo apt install -y python3-colcon-common-extensions
sudo apt install -y ros-galactic-eigen3-cmake-module
sudo pip3 install -U empy pyros-genmsg setuptools 

## Install Java 11
sudo DEBIAN_FRONTEND=noninteractive apt-get -y --quiet --no-install-recommends install \
    ant \
    openjdk-11-jre \
    openjdk-11-jdk \
    ;

## Set Java 11 as default
sudo update-alternatives --set java $(update-alternatives --list java | grep "java-11")

## Install sdkman! to Grandle
cd ~/
mkdir -p src/sdkman_installer
cd src/sdkman_installer
curl -s "https://get.sdkman.io" | bash

#source "/home/rifi/.sdkman/bin/sdkman-init.sh"
#echo 'source "/home/rifi/.sdkman/bin/sdkman-init.sh"' >> ~/.bashrc

source "~/.sdkman/bin/sdkman-init.sh"
echo 'source "~/.sdkman/bin/sdkman-init.sh"' >> ~/.bashrc
cd ..

## Install Gradle (6.3 is the recommended version)
sdk install gradle 6.3

# Install Foonathan memory
mkdir foonathan_memory
cd foonathan_memory
git clone https://github.com/eProsima/foonathan_memory_vendor.git
cd foonathan_memory_vendor
mkdir build && cd build
cmake ..
sudo cmake --build . --target install

## Install Fast-DDS from source
cd $MY_PATH/../sources2/
sudo ./eProsima_Fast-DDS-2.5.0-Linux/install.sh

export LD_LIBRARY_PATH=/usr/local/lib/
echo 'export LD_LIBRARY_PATH=/usr/local/lib/' >> ~/.bashrc

## Return to scripts folder
cd $MY_PATH
