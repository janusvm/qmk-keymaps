#pragma once
#include QMK_KEYBOARD_H

enum janusvm_layers {
    _QWERTY,
    _COLEMAK,
    _LOWER,
    _RAISE,
    _ADJUST,
    _FN,
    _ACCENTS,
    _SYMBOLS,
    _EMOJI
};

enum janusvm_keycodes {
    QWERTY = SAFE_RANGE,
    COLEMAK
};

// Layer keys
#define LOWER      MO(_LOWER)
#define RAISE      MO(_RAISE)
#define FN         MO(_FN)
#define ACCENTS    OSL(_ACCENTS)
#define SYMBOLS    OSL(_SYMBOLS)
#define EMOJI      OSL(_EMOJI)
#define FN_COMM    LT(_FN, KC_COMM)
#define LOWER_SPC  LT(_LOWER, KC_SPC)
#define RAISE_BSPC LT(_RAISE, KC_BSPC)
#define RAISE_ENT  LT(_RAISE, KC_ENT)
#define FN_TAB     LT(_FN, KC_TAB)
#define ACCENT_ESC LT(_ACCENTS, KC_ESC)

// Combined keys
#define C_Z C(KC_Z)
#define C_X C(KC_X)
#define C_C C(KC_C)
#define C_V C(KC_V)
#define C_S C(KC_S)

// Other keycodes
#define CTL_CAPS CTL_T(KC_CAPS)
