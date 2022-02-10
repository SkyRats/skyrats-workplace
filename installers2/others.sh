echo "$0: installing general dependencies"

## Generic tools
sudo apt-get -y install \
  #libeigen3-dev\
  libopencv-dev\
  #libgeographic-dev\ (mavros)
  #geographiclib-tools\ (mavros)
  cmake\

## Phyton3 packages
sudo apt-get -y install \
  python3-setuptools\
  #python3-catkin-tools\
  python3-pip\
  #python3-future\
  #python3-crcmod\
  #python3-lxml\


