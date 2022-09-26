#include QMK_KEYBOARD_H
#include "unicode.h"
#include "janusvm.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // QWERTY base layer (US ANSI)
    [_QWERTY] = LAYOUT_60_hhkb(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, /******/ KC_BSPC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT, /******/ /******/ KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, /******/ /******/ KC_RSFT, FN,
        /******/ /******/ KC_LALT, KC_LGUI, /******/ /******/ /******/ KC_SPC, /******/ /******/ /******/ ACCENTS, KC_LALT  /******/ /******/
    ),

    // Colemak-DH base layer (US ANSI)
    [_COLEMAK] = LAYOUT_60_hhkb(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
        KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    KC_J,    KC_L,   KC_U,    KC_Y,    KC_SCLN, KC_LBRC, KC_RBRC, /******/ KC_BSPC,
        KC_LCTL, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,    KC_M,    KC_N,   KC_E,    KC_I,    KC_O,    KC_QUOT, /******/ /******/ KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    KC_K,    KC_H,   KC_COMM, KC_DOT,  KC_SLSH, /******/ /******/ KC_RSFT, FN,
        /******/ /******/ KC_LALT, KC_LGUI, /******/ /******/ /******/ KC_SPC, /******/ /******/ /******/ ACCENTS, KC_LALT  /******/ /******/
    ),

    // Fn layer, for F-keys, navigation keys, and misc. media keys
    [_FN] = LAYOUT_60_hhkb(
        QK_BOOT, KC_F1,   KC_F2,   KC_F3,    KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_DEL,
        KC_CAPS, RGB_TOG, RGB_MOD, RGB_RMOD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP,   XXXXXXX, /******/ KC_DEL,
        _______, KC_VOLD, KC_VOLU, KC_MUTE,  KC_EJCT, XXXXXXX, KC_PAST, KC_PSLS, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, /******/ /******/ KC_PENT,
        _______, QWERTY,  COLEMAK,  UC_M_WC, UC_M_MA, UC_M_LN, KC_PPLS, KC_PMNS, KC_END,  KC_PGDN, KC_DOWN, /******/ /******/ CAPSWRD, _______,
        /******/ /******/ _______, _______,  /******/ /******/ /******/ _______, /******/ /******/ /******/ KC_RGUI, _______  /******/ /******/
    ),

    // Accents layer, for accented and Danish vowels (via unicodemap)
    [_ACCENTS] = LAYOUT_60_hhkb(
        _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______, _______, _______,
        _______, KC_GRV_A, KC_DIA_A, KC_CIR_A, KC_TIL_A, KC_ACU_A, KC_GRV_O, KC_DIA_O, KC_CIR_O, KC_TIL_O, KC_ACU_O, KC_AE,   KC_AA,   /******/ _______,
        _______, KC_GRV_E, KC_DIA_E, KC_CIR_E, KC_TIL_E, KC_ACU_E, KC_GRV_U, KC_DIA_U, KC_CIR_U, KC_TIL_U, KC_ACU_U, KC_OE,   /******/ /******/ _______,
        _______, KC_GRV_I, KC_DIA_I, KC_CIR_I, KC_TIL_I, KC_ACU_I, KC_GRV_Y, KC_DIA_Y, KC_CIR_Y, KC_TIL_Y, KC_ACU_Y, /******/ /******/ _______, _______,
        /******/ /******/  _______,  _______,  /******/  /******/  /******/  _______,  /******/  /******/  /******/  _______, KC_RALT  /******/ /******/
    )

};
