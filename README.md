# janusvm's QMK keymaps

This repository contains my personal QMK configurations for my keyboards. 
I'm maintaining this as its own thing instead of the recommended fork of [qmk_firmware](https://github.com/qmk/qmk_firmware), as the latter is too cluttered in my opinion.

The focus of these keymaps are generally tailored _very specifically_ to my own taste and needs, which in summary are as follows:

* Colemak-DH layout for alphas
* Easy access to ÆØÅ (Danish letters) and accents
* Split spacebar into (at least) Space and Backspace to make better use of the thumbs
* Symbols accessible close to homerow via layers

## How to build and flash a keymap from this repo

1. Clone this repo 

    ```bash
    git clone https://github.com/janusvm/qmk-keymaps.git
    ```

1. Clone the QMK firmware repo to the same root folder

    ```bash
    git clone https://github.com/qmk/qmk_firmware.git
    ```

1. Create a symbolic link for the `user` folder with code shared between keymaps 

   ```bash
   ln -s qmk-keymaps/user qmk_firmware/users/janusvm
   ```
   The name of this folder has to be `janusvm`, 
   (see the QMK docs for [Userspace](https://docs.qmk.fm/#/feature_userspace) for more information about this)
   
1. For the keyboard you want to build a keymap for, create a link from the keymap folder in `qmk-keymaps` to the appropriate folder in `qmk_firmware`

    ```bash
    ln -s qmk-keymaps/<keyboard> qmk_firmware/keyboards/<keyboard>/keymaps/janusvm
    ```

1. Compile and flash the linked keymap with `make` (hitting the `RESET` button when it says it's looking for the bootloader)

    ```bash
    cd qmk_firmware
    make <keyboard>:janusvm:flash
    ```
    or with the `qmk` CLI tool

    ```bash
    cd qmk_firmware
    qmk flash -kb <keyboard> -km janusvm
    ```
    (exchange `flash` with `compile` to build a .bin file to flash with QMK Toolbox)

See each keymap's README for more specific build instructions.
