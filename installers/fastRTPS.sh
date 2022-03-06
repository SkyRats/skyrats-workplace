#! /usr/bin/env bash
echo "$0: installing fastRTPS dependencies"

## Import scripts common tools
source ../lib/extra_tools.sh

## Initialize variables
INSTALL_GITMAN="true"

## Get and go to this file's path
MY_PATH=`whereAmIFrom`

## Parse arguments
for arg in "$@"
do
	if [[ $arg == "--no-gitman.sh" ]]; then
		INSTALL_GITMAN="false"
	fi
done

## Run gitman.sh
if [ $INSTALL_GITMAN == "true" ]; then
    bash "$MY_PATH/gitman.sh"
fi

## Install additional DDS implementations
sudo apt install -y ros-galactic-rmw-fastrtps-cpp

## Switch to rmw_fastrtps
export RMW_IMPLEMENTATION=rmw_fastrtps_cpp
addToBashrc "export RMW_IMPLEMENTATION=rmw_fastrtps_cpp" 

## Install dependencies
sudo apt install -y python3-setuptools python3-pip
sudo apt install -y python3-colcon-common-extensions
sudo apt install -y ros-galactic-eigen3-cmake-module
sudo pip3 install -U empy pyros-genmsg setuptools testresources

## Install Java 13
sudo DEBIAN_FRONTEND=noninteractive apt-get -y --quiet --no-install-recommends install \
    ant \
    openjdk-13-jre \
    openjdk-13-jdk \
    ;

## Set Java 13 as default
sudo update-alternatives --set java $(update-alternatives --list java | grep "java-13")

## Install sdkman! to Grandle
cd "$MY_PATH/../src/"
mkdir sdkman_installer
cd sdkman_installer
curl -s "https://get.sdkman.io" | bash

source "$HOME/.sdkman/bin/sdkman-init.sh"
addToBashrc 'source "$HOME/.sdkman/bin/sdkman-init.sh"' 
cd ..

## Install Gradle (6.3 is the recommended version)
echo
sdk install gradle 6.3

# Install Foonathan memory
gitman install --force foonathan_memory_vendor
cd "$MY_PATH/../src/foonathan_memory_vendor"
mkdir build 
cd build
cmake ..
sudo cmake --build . --target install

## Install Fast-RTPS-gen from source - verify gradle and java
gitman install --force Fast-DDS-Gen
cd "$MY_PATH/../src/Fast-DDS-Gen"
gradle assemble
sudo env "PATH=$PATH" gradle install

## Return to scripts folder
cd "$MY_PATH"
