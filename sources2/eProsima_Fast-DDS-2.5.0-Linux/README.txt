# Install Fast-DDS

In the src folder you will find:

- fastcdr
- fastrtps
- fastrtpsgen
- foonathan-memory-vendor

If you don't want to install any of these components, you can simply remove or rename its folder from src directory.

To install fastdds and all its dependencies in the system, you must run (with administrative privileges) the install.sh
script:

> sudo ./install.sh

To uninstall all installed components, run the uninstall.sh script (with administratives privileges - CAUTION, if any of the other components were already
installed by other way in the system, they will be removed as well. To avoid it, edit the script before executing):

> sudo ./uninstall.sh

Note that asio and tinyxml must be installed in the system. On Ubuntu, you can install them by using the package manager with the following command:

> sudo apt install libasio-dev libtinyxml2-dev

cmake and g++ are also required:

> sudo apt install cmake g++

In addition, you may need to set LD_LIBRARY_PATH:

> export LD_LIBRARY_PATH=/usr/local/lib/
