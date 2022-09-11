#include QMK_KEYBOARD_H
#include "keymap_danish.h"
#include "janusvm.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT_65_iso_blocker(
        KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,   KC_7,    KC_8,    KC_9,    KC_0,   KC_MINS, KC_EQL,  KC_BSPC, KC_HOME,
        FN_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,   DK_ARNG, DK_DIAE, /******/ KC_PGUP,
        CTL_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,   KC_J,    KC_K,    KC_L,    DK_AE,  DK_OSTR, DK_QUOT, KC_ENT,  KC_PGDN,
        KC_LSFT,  DK_LABK, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_N,    KC_M,    KC_COMM, KC_DOT, DK_MINS, KC_RSFT, KC_UP,   KC_END,
        KC_LCTL,  KC_LGUI, KC_LALT, /******/ /******/ /******/ KC_SPC, /******/ /******/ KC_RALT, FN,     /******/ KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [_COLEMAK] = LAYOUT_65_iso_blocker(
        KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   KC_MINS, KC_EQL,  KC_BSPC, KC_HOME,
        FN_TAB,   KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    KC_J,    KC_L,    KC_U,    KC_Y,    DK_AE,  DK_ARNG, DK_DIAE, /******/ KC_PGUP,
        CTL_CAPS, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,    KC_M,    KC_N,    KC_E,    KC_I,    KC_O,   DK_OSTR, DK_QUOT, KC_ENT,  KC_PGDN,
        KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    DK_LABK, KC_K,    KC_H,    KC_COMM, KC_DOT, DK_MINS, KC_RSFT, KC_UP,   KC_END,
        KC_LCTL,  KC_LGUI, KC_LALT, /******/ /******/ /******/ KC_SPC,  /******/ /******/ KC_RALT, FN,     /******/ KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [_FN] = LAYOUT_65_iso_blocker(
        QK_BOOT, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  _______,
        _______, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, _______, _______, _______, _______, KC_PSCR, KC_SLCK, KC_PAUS, /******/ _______,
        _______, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, QWERTY,  COLEMAK, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PGUP, _______,
        _______, _______, _______, /******/ /******/ /******/ _______, /******/ /******/ _______, _______, /******/ KC_HOME, KC_PGDN, KC_END
    )

};
