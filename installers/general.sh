echo "$0: installing general dependencies"


sudo apt-get -y install cmake build-essential autotools-dev automake autoconf

sudo apt-get -y install \
  ros-noetic-catkin \

sudo apt-get -y install \
  python3-setuptools\
  python3-catkin-tools\
  python3-pip\
  python3-future\
  python3-crcmod\
  python3-lxml\

sudo apt-get -y install \
  libeigen3-dev\
  libopencv-dev\
  libgeographic-dev\
  geographiclib-tools\
