# QMK ⌨

Modified for the `upgraded-waffle` 🧇

## Usage

To use the `./run.sh` command, please ensure you have the following installed and ready to use:

- Docker
- Docker-compose
- Some flavor of bash (WSL or native Linux)

### Steps

1. From this directory, run the following command: `./run.sh`
2. Follow the prompts - Example: `-kb: dumbpad` and `-km default`
3. Check for the output hex file in this directory. Example: `dumbpad_v1x_dualencoder_default.hex.output`
4. Rename/remove the `.output` from the filename to flash with QMK Toolbox
5. 🎉

#### Explanation

The following steps above just built a Docker container. This docker container copied all the files from this directory and attached a volume to write the file back into our repo. It then built and compiled the keyboard/macro we provided during runtime. This is fed through `qmk compile` and then saved to our working directory as `<filename>.hex.output`. We then have to rename this file to remove the `.output` to use it within QMK Toolbox for flashing.
