echo "$0: installing general dependencies"


sudo apt-get -y install cmake build-essential autotools-dev automake autoconf

sudo apt-get -y install \
  ros-noetic-visualization-msgs\
  ros-noetic-smach-*\
  ros-noetic-diagnostic-updater\
  ros-noetic-nav-msgs\
  ros-noetic-angles\
  ros-noetic-rosconsole-bridge\
  ros-noetic-gazebo-*\
  ros-noetic-eigen-conversions\
  ros-noetic-tf-conversions\
  ros-noetic-roslint\
  ros-noetic-xacro\
  ros-noetic-camera-info-manager\
  ros-noetic-control-toolbox\
  ros-noetic-image-view\
  ros-noetic-image-transport\
  ros-noetic-image-transport-plugins\
  ros-noetic-image-geometry\
  ros-noetic-compressed-image-transport\
  ros-noetic-theora-image-transport\
  ros-noetic-rosbash\
  ros-noetic-rqt*\
  ros-noetic-tf2-sensor-msgs\
  ros-noetic-tf2-geometry-msgs\
  ros-noetic-tf2-eigen\
  ros-noetic-octomap-msgs\
  ros-noetic-pcl-ros\
  ros-noetic-pcl-conversions\
  ros-noetic-rosdoc-lite\
  ros-noetic-geographic-msgs\
  ros-noetic-rviz-visual-tools\
  ros-noetic-catch-ros\
  ros-noetic-octomap\
  ros-noetic-cmake-modules\
  ros-noetic-nlopt\
  ros-noetic-plotjuggler-ros\
  ros-noetic-joy\

sudo apt-get -y install \
  ros-noetic-catkin \

sudo apt-get -y install \
  python3-setuptools\
  python3-prettytable\
  python3-empy\
  python3-serial\
  python3-bloom\
  python3-osrf-pycommon\
  python3-catkin-tools\
  python3-pip\
  python3-future\
  python3-crcmod\
  python3-lxml\

sudo apt-get -y install \
  genromfs\
  ant\
  protobuf-compiler\
  libeigen3-dev\
  libopencv-dev\
  openocd\
  flex\
  bison\
  libncurses5-dev\
  libftdi-dev\
  libtool\
  zlib1g-dev\
  gcc-arm-none-eabi\
  libevent-dev\
  libncurses5-dev\
  expect-dev\
  moreutils\
  xvfb\
  libeigen3-dev\
  libsuitesparse-dev\
  protobuf-compiler\
  libnlopt-dev\
  distcc\
  ocl-icd-opencl-dev\
  ocl-icd-dev\
  ocl-icd-libopencl1\
  clinfo\
  opencl-headers\
  libgeographic-dev\
  geographiclib-tools\
  libx264-dev\
  libzstd-dev\
  libqcustomplot-dev\
  xutils-dev\
  net-tools\