# janusvm's QMK keymaps

This repository contains my personal QMK configurations for my keyboards. 
I'm maintaining this as its own thing instead of the recommended fork of [qmk_firmware](https://github.com/qmk/qmk_firmware), as the latter is too cluttered in my opinion.

The focus of these keymaps are generally tailored _very specifically_ to my own taste and needs, which in summary are as follows:

* Colemak-DH layout for alphas
* Easy access to ÆØÅ (Danish letters) and accents
* Split spacebar into (at least) Space and Backspace to make better use of the thumbs
* Symbols accessible close to homerow via layers

## How to build a keymap from this repo

1. Clone this repo 

    ```bash
    git clone https://github.com/janusvm/qmk-keymaps.git
    ```

2. Clone the QMK firmware repo to the same root folder

    ```bash
    git clone https://github.com/qmk/qmk_firmware.git
    ```

3. Create a link from the keymap in `qmk-keymaps` to the appropriate folder in `qmk_firmware`, for example, for the Planck

    ```bash
    ln -s qmk-keymaps/planck qmk_firmware/keyboards/planck/keymaps/janusvm
    ```

4. Compile and flash the linked keymap with the `qmk` tool

    ```bash
    cd qmk_firmware
    qmk flash -kb planck/rev6 -km janusvm
    ```
    (exchange `flash` with `compile` to build a .bin file to flash with QMK Toolbox)