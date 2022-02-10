#!/bin/bash
echo "$0: installing Gitman"

sudo apt-get -y install python3-pip python3-setuptools
sudo pip3 install gitman
sudo -H pip3 install gitman

#TODO: study the necessity of command repetition 

## Install gitman submodules
## for exemp0lo, px4
gitman install --force
