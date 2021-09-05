# upgraded-waffle 🧇

A smol waffle with clicky buttons of power (aka a macro-pad)

![IMG_3076](https://user-images.githubusercontent.com/23362539/125228014-cf859580-e288-11eb-95ee-b49b2a025679.jpg)

## About

There are two folders at the root of this repo which contain scripts that bind to your macro pad. One for `Linux` (autokey) and one for `Windows` (autohotkey).

This allows you to bind keys on your macropad to execute scripts for automation. Of course you can always use default QMK keybinds if you like. These include string macros, volume/media controls, launching applications, etc. However, we want to made our little clicky waffle be **upgraded** and do more than just what QMK allows us to do!

Using **autokey** or **autohotkey** we can have each button on our macro pad invoke Python scripts for automation and custom actions to do whatever our heart desires!

## Setup

Clone this repo to your home directory.

- Windows: `C:\Users\<username>`
- Linux: `~/<username>`

### Windows

If you are running Windows, install [`autohotkey`](https://www.autohotkey.com/) and ensure it runs on startup. Ensure the `C:\Users\<username>\upgraded-waffle\autohotkey` folder is being used when `autohotkey` runs.

### Linux

If you are running Linux install [`autokey`](https://github.com/autokey/autokey/wiki/Installing) and ensure it runs on start-up and points to the `~/upgrade-waffle/autokey` directory.

### QMK Setup

To build a keyboard firmware hex file with QMK, see the nested documentation [here](qmk_firmware/README.md)

### Directory Structure

```text
upgraded-waffle
│   README.md  
│
└───autohotkey (for Windows scripting)
│   │   upgraded-waffle.ahk (template)
│   │   other [ahk] files
│   
└───autokey (for Linux scripting)
|   │   example.py
|   │   other *.py files for autokey scripting
|
└───qmk_firmware (for building hex files)
```


