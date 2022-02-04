echo "$0: installing general dependencies"


# TODO: install colcon e create repository
# https://docs.ros.org/en/galactic/Tutorials/Workspace/Creating-A-Workspace.html

sudo apt-get -y install \
  libeigen3-dev\
  libopencv-dev\
  libgeographic-dev\
  geographiclib-tools\
  python3-pip\
  cmake\

