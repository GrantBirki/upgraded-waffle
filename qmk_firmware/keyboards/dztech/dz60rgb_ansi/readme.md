# DZ60RGB-ANSI

There are two versions of the DZ60RGB-ANSI. Please use the appropriate firmware for your board.

* V1: STM32F303 (Arm), takes .bin files
* V2: ATmega32U4 (AVR), takes .hex files

Make example for this keyboard (after setting up your build environment):

    make dztech/dz60rgb_ansi/v1:default # Arm (STM32F303)
    make dztech/dz60rgb_ansi/v2:default # AVR (ATmega32U4)

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## BIRKI BUILDING

To build the birki .hex file do the following from the root of this repo:

`make dztech/dz60rgb_ansi/v2:default`
