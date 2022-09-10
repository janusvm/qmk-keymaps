#include QMK_KEYBOARD_H
#include "janusvm.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // COLEMAK-DH layer, based on ANSI Colemak-DHm
    [_COLEMAK] = LAYOUT(
        KC_Q,        KC_W,        KC_F,        KC_P,        KC_B,               KC_J,       KC_L,        KC_U,        KC_Y,        KC_DEL,
        GUI_T(KC_A), ALT_T(KC_R), CTL_T(KC_S), SFT_T(KC_T), KC_G,               KC_M,       SFT_T(KC_N), CTL_T(KC_E), ALT_T(KC_I), GUI_T(KC_O),
        KC_Z,        KC_X,        KC_C,        KC_D,        KC_V,               KC_K,       KC_H,        KC_COMM,     KC_DOT,      KC_SLSH,
                                               FN_TAB,      LOWER_SPC,          RAISE_BSPC, ACCENT_ESC
    ),

    // LOWER layer, for numbers, navigation and Danish characters
    [_LOWER] = LAYOUT(
        KC_1,        KC_2,        KC_3,        KC_4,        KC_5,             KC_PGUP,   KC_HOME, KC_UP,   KC_END,   XXXXXXX,
        GUI_T(KC_6), ALT_T(KC_7), CTL_T(KC_8), SFT_T(KC_9), KC_0,             KC_PGDN,   KC_LEFT, KC_DOWN, KC_RIGHT, XXXXXXX,
        C_Z,         C_X,         C_C,         C_V,         C_S,              XXXXXXX,   KC_AE,   KC_OE,   KC_AA,    XXXXXXX,
                                               XXXXXXX,     _______,          RAISE_ENT, CAPSWRD
    ),

    // RAISE layer, for special characters
    [_RAISE] = LAYOUT(
        KC_EXLM, KC_AT,   KC_LCBR, KC_RCBR, KC_PERC,          KC_AMPR, KC_LT,   KC_GT,   KC_DQUO, KC_EQL,
        KC_CIRC, KC_DLR,  KC_LBRC, KC_RBRC, KC_HASH,          KC_ASTR, KC_LPRN, KC_RPRN, KC_QUOT, KC_PLUS,
        KC_BSLS, KC_PIPE, KC_GRV,  KC_TILD, KC_QUES,          KC_SLSH, KC_UNDS, KC_SCLN, KC_COLN, KC_MINS,
                                   _______, _______,          _______, KC_RALT
    ),

    // ADJUST layer, with mouse keys and board settings
    [_ADJUST] = LAYOUT(
        RESET,   XXXXXXX, KC_BRID, KC_BRIU, RGB_TOG,          UC_M_WC, KC_CAPS, KC_SCRL, KC_NUM,  KC_INS,
        XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, AU_TOG,           UC_M_MA, KC_BTN4, KC_BTN5, KC_WHOM, KC_WREF,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          UC_M_LN, KC_MPRV, KC_MPLY, KC_MSTP, KC_MNXT,
                                   XXXXXXX, _______,          _______, XXXXXXX
    ),

    // FN layer, for F-keys and numpad
    [_FN] = LAYOUT(
        KC_F1,        KC_F2,        KC_F3,        KC_F4,        KC_F5,            KC_COMM, KC_P7,        KC_P8,        KC_P9,        KC_DOT,
        GUI_T(KC_F6), ALT_T(KC_F7), CTL_T(KC_F8), SFT_T(KC_F9), KC_F10,           KC_PAST, SFT_T(KC_P4), CTL_T(KC_P5), ALT_T(KC_P6), GUI_T(KC_PPLS),
        KC_F11,       KC_F12,       KC_APP,       KC_PSCR,      CAPSWRD,          KC_PSLS, KC_P1,        KC_P2,        KC_P3,        KC_PMNS,
                                                  _______,      XXXXXXX,          KC_ENT,  KC_P0
    ),

    // ACCENTS layer, for accented vowels
    [_ACCENTS] = LAYOUT(
        KC_GRV_A, KC_DIA_A, KC_CIR_A, KC_TIL_A, KC_ACU_A,          KC_GRV_O, KC_DIA_O, KC_CIR_O, KC_TIL_O, KC_ACU_O,
        KC_GRV_E, KC_DIA_E, KC_CIR_E, KC_TIL_E, KC_ACU_E,          KC_GRV_U, KC_DIA_U, KC_CIR_U, KC_TIL_U, KC_ACU_U,
        KC_GRV_I, KC_DIA_I, KC_CIR_I, KC_TIL_I, KC_ACU_I,          KC_GRV_Y, KC_DIA_Y, KC_CIR_Y, KC_TIL_Y, KC_ACU_Y,
                                      SYMBOLS,  EMOJI,             XXXXXXX,  _______
    ),

    // SYMBOLS layer, for various unicode characters
    [_SYMBOLS] = LAYOUT(
        KC_HALF,        KC_SQUARED,      KC_INTEGRAL,  KC_DEGREES,    KC_BULLET,            KC_EURO,         KC_GBP,        KC_UP_ARROW,   KC_JPY,         KC_NEQ,
        KC_INFTY,       KC_REGISTERED,   KC_SQRT,      KC_TRADEMARK,  KC_GRADIENT,          KC_TIMES,        KC_LEFT_ARROW, KC_DOWN_ARROW, KC_RIGHT_ARROW, KC_PLUS_MINUS,
        KC_SOLID_BLOCK, KC_MEDIUM_BLOCK, KC_COPYRIGHT, KC_PARTIAL,    KC_UNION,             KC_INTERSECTION, KC_NOT,        KC_EMPTY_SET,  KC_EN_DASH,     KC_EM_DASH,
                                                       KC_ELEMENT_OF, KC_NO,                KC_CHECK_MARK,   KC_CROSS_MARK
    ),

    // EMOJI layer, for quickly accessing my favourite emoji
    [_EMOJI] = LAYOUT(
        KC_SMIRK,       KC_FLUSHED,    KC_WEARY,   KC_WINK,        KC_ROLLING_EYES,            KC_THINKING,    KC_SHUSH,    KC_OK_HAND, KC_EYES,  KC_SPARKLES,
        KC_SWEAT_SMILE, KC_HEART_EYES, KC_SOB,     KC_WINK_KISS,   KC_RAISED_EYEBROW,          KC_UPSIDE_DOWN, KC_GRIMACE,  KC_CLAP,    KC_BRAIN, KC_SWEAT,
        KC_JOY,         KC_ZANY,       KC_PENSIVE, KC_WINK_TONGUE, KC_UNAMUSED,                KC_POOP,        KC_TRIUMPH,  KC_PRAY,    KC_FIRE,  KC_HEARTS,
                                                   KC_B_BUTTON,    KC_NO,                      KC_CHECK,       KC_NO_ENTRY
    )
};

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}
