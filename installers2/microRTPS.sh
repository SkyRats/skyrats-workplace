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
sudo apt install -y \
    python3-colcon-common-extensions \
    ros-galatic-eigen3-cmake-module \
    ;
sudo pip3 install -y -U empy pyros-genmsg setuptools 

## Install Java 8 
sudo DEBIAN_FRONTEND=noninteractive apt-get -y --quiet --no-install-recommends install \
    ant \
    openjdk-8-jre \
    openjdk-8-jdk \
    ;

## Set Java 8 as default
sudo update-alternatives --set java $(update-alternatives --list java | grep "java-8")

## Install sdkman! to Grandle
mkdir sdkman_installer
cd sdkman_installer
curl -s "https://get.sdkman.io" | bash
source "/home/rifi/.sdkman/bin/sdkman-init.sh"
echo 'source "/home/rifi/.sdkman/bin/sdkman-init.sh"' >> ~/.bashrc
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
cmake --build . --target install
cd ..

## Install Fast-DDS from source
sudo ./eProsima_Fast-DDS-2.5.0-Linux/install.sh

export LD_LIBRARY_PATH=/usr/local/lib/
echo 'export LD_LIBRARY_PATH=/usr/local/lib/' >> ~/.bashrc

## Return to scripts folder
cd $MY_PATH