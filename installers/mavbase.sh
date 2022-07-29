MY_PATH="$( cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd )"

gitman install mavbase2
sudo mv --update "$MY_PATH/src/mavbase2" ~/skyrats_ws2/src