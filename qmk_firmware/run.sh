#/bin/bash

echo -e "\e[34m[#] Killing old docker processes\e[0m"
docker-compose rm -fs
echo -e "\e[34m[#] Building docker container\e[0m"
docker-compose build || exit 1

read -p "Enter Keyboard (Ex: dumbpad) -kb: " keyboard
read -p "Enter Keymap (Ex: default) -km: " keymap

docker-compose run --rm qmk_firmware -kb $keyboard -km $keymap

echo -e "\e[32m[#] qmk_firmware container is now running!\e[0m"

mv *.hex.output "$keyboard-$keymap.hex" 
echo -e "\e[32m[#] $keyboard-$keymap.hex saved to qmk_firmware folder\e[0m"
