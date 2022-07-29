MY_PATH="$( cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd )"

gitman install simulation2
sudo mv --update "$MY_PATH/src/simulation2" ~/skyrats_ws2/src