#/bin/bash

echo -e "\e[34m[#] Killing old docker processes\e[0m"
docker-compose rm -fs
echo -e "\e[34m[#] Building docker container\e[0m"
docker-compose build || exit 1

read -p "Enter Keyboard (Ex: dumbpad) -kb: " keyboard
read -p "Enter Macro (Ex: default) -km: " keymap

docker-compose run --rm qmk_firmware -kb $keyboard -km $keymap

echo -e "\e[32m[#] qmk_firmware container is now running!\e[0m"

echo -e "\e[32m[+] You should now see a <filename>.hex.output file in your current working directory\nPlease remove the .output from the filename and open in QMK Configurator to flash your keyboard! \e[0m"
