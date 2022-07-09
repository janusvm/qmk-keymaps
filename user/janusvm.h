#pragma once
#include "unicode.h"

enum janusvm_layers {
    _COLEMAK_DH,
    _LOWER,
    _RAISE,
    _ADJUST,
    _FN,
    _ACCENTS,
    _SYMBOLS,
    _EMOJI
};

// Layer keys
#define FN_COMM    LT(_FN, KC_COMM)
#define LOWER_SPC  LT(_LOWER, KC_SPC)
#define RAISE_BSPC LT(_RAISE, KC_BSPC)
#define RAISE_ENT  LT(_RAISE, KC_ENT)
#define FN_TAB     LT(_FN, KC_TAB)
#define ACCENT_ESC LT(_ACCENTS, KC_ESC)
#define SYMBOLS    OSL(_SYMBOLS)
#define EMOJI      OSL(_EMOJI)

// Combined keys
#define C_Z C(KC_Z)
#define C_X C(KC_X)
#define C_C C(KC_C)
#define C_V C(KC_V)
#define C_S C(KC_S)

