#include QMK_KEYBOARD_H
#include "unicode.h"

// Layers
enum planck_layers {
    _COLEMAK_DH,
    _LOWER,
    _RAISE,
    _ADJUST,
    _FN,
    _ACCENTS
};

// Layer keys
#define FN_COMM    LT(_FN, KC_COMM)
#define LOWER_SPC  LT(_LOWER, KC_SPC)
#define RAISE_BSPC LT(_RAISE, KC_BSPC)
#define FN_TAB     LT(_FN, KC_TAB)
#define ACCENT_ESC LT(_ACCENTS, KC_ESC)

// Combined keys
#define C_Z C(KC_Z)
#define C_X C(KC_X)
#define C_C C(KC_C)
#define C_V C(KC_V)
#define C_S C(KC_S)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // COLEMAK-DH layer, based on ANSI Colemak-DHm
    [_COLEMAK_DH] = LAYOUT(
        KC_Q,        KC_W,        KC_F,        KC_P,        KC_B,      XXXXXXX, XXXXXXX,    KC_J,       KC_L,        KC_U,        KC_Y,        KC_DEL,
        GUI_T(KC_A), ALT_T(KC_R), CTL_T(KC_S), SFT_T(KC_T), KC_G,      XXXXXXX, XXXXXXX,    KC_M,       SFT_T(KC_N), CTL_T(KC_E), ALT_T(KC_I), GUI_T(KC_O),
        KC_Z,        KC_X,        KC_C,        KC_D,        KC_V,      XXXXXXX, XXXXXXX,    KC_K,       KC_H,        KC_COMM,     KC_DOT,      KC_ENT,
        XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     LOWER_SPC, FN_TAB,  ACCENT_ESC, RAISE_BSPC, XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX
    ),

    // LOWER layer, for numbers, navigation and Danish characters
    [_LOWER] = LAYOUT(
        KC_1,        KC_2,        KC_3,        KC_4,        KC_5,    XXXXXXX, XXXXXXX, KC_PGUP, KC_HOME, KC_UP,   KC_END,   XXXXXXX,
        GUI_T(KC_6), ALT_T(KC_7), CTL_T(KC_8), SFT_T(KC_9), KC_0,    XXXXXXX, XXXXXXX, KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT, XXXXXXX,
        C_Z,         C_X,         C_C,         C_V,         C_S,     XXXXXXX, XXXXXXX, XXXXXXX, KC_AE,   KC_OE,   KC_AA,    XXXXXXX,
        XXXXXXX,     XXXXXXX,     XXXXXXX,     XXXXXXX,     _______, _______, KC_ENT,  _______, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX
    ),

    // RAISE layer, for special characters
    [_RAISE] = LAYOUT(
        KC_EXLM, KC_AT,   KC_LCBR, KC_RCBR, KC_PERC, XXXXXXX, XXXXXXX, KC_AMPR, KC_LT,   KC_GT,   KC_DQUO, KC_EQL,
        KC_CIRC, KC_DLR,  KC_LBRC, KC_RBRC, KC_HASH, XXXXXXX, XXXXXXX, KC_ASTR, KC_LPRN, KC_RPRN, KC_QUOT, KC_PLUS,
        KC_BSLS, KC_PIPE, KC_GRV,  KC_TILD, KC_QUES, XXXXXXX, XXXXXXX, KC_SLSH, KC_UNDS, KC_SCLN, KC_COLN, KC_MINS,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    ),

    // ADJUST layer, with mouse keys and board settings
    [_ADJUST] = LAYOUT(
        RESET,   XXXXXXX, KC_BRID, KC_BRIU, RGB_TOG, XXXXXXX, XXXXXXX, UC_M_WC, KC_CAPS, KC_SCRL, KC_NUM,  KC_INS,
        XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, AU_TOG,  XXXXXXX, XXXXXXX, UC_M_MA, KC_WBAK, KC_WFWD, KC_WHOM, KC_WREF,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, UC_M_LN, KC_MPRV, KC_MPLY, KC_MSTP, KC_MNXT,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    ),

    // FN layer, for F-keys and numpad
    [_FN] = LAYOUT(
        KC_F1,        KC_F2,        KC_F3,        KC_F4,        KC_F5,   XXXXXXX, XXXXXXX, KC_COMM, KC_P7,        KC_P8,        KC_P9,        KC_PDOT,
        GUI_T(KC_F6), ALT_T(KC_F7), CTL_T(KC_F8), SFT_T(KC_F9), KC_F10,  XXXXXXX, XXXXXXX, KC_PAST, SFT_T(KC_P4), CTL_T(KC_P5), ALT_T(KC_P6), GUI_T(KC_PPLS),
        KC_F11,       KC_F12,       KC_APP,       KC_PSCR,      CAPSWRD, XXXXXXX, XXXXXXX, KC_PSLS, KC_P1,        KC_P2,        KC_P3,        KC_PMNS,
        XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      _______, _______, KC_ENT,  KC_P0,   XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX
    ),

    // ACCENTS layer, for accented vowels
    [_ACCENTS] = LAYOUT(
        KC_GRV_A, KC_DIA_A, KC_CIR_A, KC_TIL_A, KC_ACU_A, XXXXXXX, XXXXXXX, KC_GRV_O, KC_DIA_O, KC_CIR_O, KC_TIL_O, KC_ACU_O,
        KC_GRV_E, KC_DIA_E, KC_CIR_E, KC_TIL_E, KC_ACU_E, XXXXXXX, XXXXXXX, KC_GRV_U, KC_DIA_U, KC_CIR_U, KC_TIL_U, KC_ACU_U,
        KC_GRV_I, KC_DIA_I, KC_CIR_I, KC_TIL_I, KC_ACU_I, XXXXXXX, XXXXXXX, KC_GRV_Y, KC_DIA_Y, KC_CIR_Y, KC_TIL_Y, KC_ACU_Y,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______,  _______, _______, KC_RALT,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX
    )
};

layer_state_t layer_state_set_user(layer_state_t state) {
    state = update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
    switch (get_highest_layer(state)) {
        case _LOWER:
            rgblight_setrgb(0x7A, 0xFF, 0x00);
            break;
        case _RAISE:
            rgblight_setrgb(0xBD, 0x00, 0xFF);
            break;
        case _ADJUST:
            rgblight_setrgb(0xFF, 0x7A, 0x00);
            break;
        case _FN:
            rgblight_setrgb(0x99, 0xF5, 0xFF);
            break;
        case _ACCENTS:
            rgblight_setrgb(0xFF, 0xF5, 0x00);
        default:
            rgblight_setrgb(RGB_OFF);
            break;
    }
    return state;
}

// Set initial light to be off
void keyboard_post_init_user(void) {
    set_single_persistent_default_layer(_COLEMAK_DH);
    rgblight_enable_noeeprom();
    rgblight_setrgb(RGB_OFF);
}

bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RAISE_BSPC:
            return false;
        default:
            // Enable TAPPING_FORCE_HOLD for everything but backspace
            return true;
    }
}

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LOWER_SPC:
        case RAISE_BSPC:
        case FN_TAB:
        case ACCENT_ESC:
            // Enable HOLD_ON_OTHER_KEY_PRESS for just the thumb keys
            return true;
        default:
            return false;
    }
}


bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        case KC_AE ... KC_ACU_Y:
            add_weak_mods(MOD_BIT(KC_LSFT));
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_MINS:
        case KC_UNDS:
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}
