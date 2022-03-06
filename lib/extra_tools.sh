### Useful tools for skyrats scripts

## Get script's path and go to it
whereAmIFrom () {
    MY_PATH0=`dirname "$0"`
    MY_PATH1=`( cd "$MY_PATH0" && pwd )`
    cd "$MY_PATH1"
    echo $MY_PATH1
}

## Add a line to .bashrc
addToBashrc () {
    LINE=$1
    NUM=`cat ~/.bashrc | grep "$LINE" | wc -l`
    if [ "$NUM" -lt "1" ]; then
        echo "--> Adding '$LINE' to your .bashrc"
        echo "$LINE" >> ~/.bashrc
    fi
}


