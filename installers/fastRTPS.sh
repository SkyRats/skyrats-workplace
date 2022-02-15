#! /usr/bin/env bash
echo "$0: installing fastRTPS dependencies"

## Get and go to this file's path
MY_PATH=`dirname "$0"`
MY_PATH=`( cd "$MY_PATH" && pwd )`
cd "$MY_PATH"

## Run gitman.sh
bash $MY_PATH/gitman.sh

## Install additional DDS implementations
sudo apt install ros-galactic-rmw-fastrtps-cpp -y

## Switch to rmw_fastrtps
export RMW_IMPLEMENTATION=rmw_fastrtps_cpp
echo "export RMW_IMPLEMENTATION=rmw_fastrtps_cpp" >> ~/.bashrc

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
cd $MY_PATH/../src/
mkdir sdkman_installer
cd sdkman_installer
curl -s "https://get.sdkman.io" | bash

source "$HOME/.sdkman/bin/sdkman-init.sh"
echo 'source "$HOME/.sdkman/bin/sdkman-init.sh"' >> ~/.bashrc
cd ..

## Install Gradle (6.3 is the recommended version)
echo
sdk install gradle 6.3

# Install Foonathan memory
cd $MY_PATH/../src/foonathan_memory
mkdir build 
cd build
cmake ..
sudo cmake --build . --target install

echo "$0: installing fastRTPS"

# ## Install Fast-DDS from source
# cd $MY_PATH/../src/
# git clone --recursive https://github.com/eProsima/Fast-DDS.git -b v2.0.2 ./FastDDS-2.0.2
# cd ./FastDDS-2.0.2
# mkdir build 
# cd build
# cmake -DTHIRDPARTY=ON -DSECURITY=ON ..
# make -j $(nproc --all)
# sudo make install

## Install Fast-RTPS-gen from source
cd $MY_PATH/../src/Fast-RTPS-Gen
gradle assemble
sudo env "PATH=$PATH" gradle install

#export LD_LIBRARY_PATH=/usr/local/lib/
#echo 'export LD_LIBRARY_PATH=/usr/local/lib/' >> ~/.bashrc
#(i don't remmember where this came from)
# TODO: clear?

## Return to scripts folder
cd $MY_PATH
