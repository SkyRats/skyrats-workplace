#!/bin/sh

# Determine if apt-get is available
if [ -n "$(command -v apt-get)" ]; then
# Install dependencies
apt-get update && apt-get install --yes --no-install-recommends \
    git \
    build-essential \
    cmake \
    libssl-dev \
    libasio-dev \
    libtinyxml2-dev \
    openjdk-8-jre-headless
else
    echo -e "The following dependencies need to be installed before installing FastRTPS\n" \
        "git\n" \
        "g++\n" \
        "cmake\n" \
        "libssl-dev\n" \
        "libasio-dev\n" \
        "libtinyxml2-dev\n" \
        "java-8-jre-headless\n"
    read -p "Do you want to continue [y / n]?" -n 1 -r
    if [[ $REPLY =~ ^[Nn]$ ]]; then
        echo -e "\n"
        exit 0
    fi
fi

# Needed for foonathan_memory repo
export GIT_SSL_NO_VERIFY=1

if [ -d src/foonathan_memory_vendor ]; then
    mkdir -p build/foonathan_memory_vendor
    cd build/foonathan_memory_vendor
    cmake -DCMAKE_INSTALL_PREFIX=/usr/local/ ../../src/foonathan_memory_vendor
    cmake --build . --target install
    cd ../..
fi

for dyn_link in ON OFF
do
    if [ -d src/fastcdr ]; then
        mkdir -p build/fastcdr
        cd build/fastcdr
        cmake -DBUILD_SHARED_LIBS=$dyn_link ../../src/fastcdr
        cmake --build . --target install
        cd ../..
    fi

    mkdir -p build/fastrtps
    cd build/fastrtps
    cmake -DCMAKE_PREFIX_PATH=/usr/local -DBUILD_SHARED_LIBS=$dyn_link ../../src/fastrtps
    cmake --build . --target install
    cd ../..

    # remove build directories
    rm -rf build
done

mkdir -p /usr/local/share/fastddsgen/java
cp java/fastddsgen.jar /usr/local/share/fastddsgen/java
cp java/fastddsgen /usr/local/bin/
cp -r doc/ /usr/local/share/fastrtps/
