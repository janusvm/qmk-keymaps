#include QMK_KEYBOARD_H
#include "unicode.h"

// Layers
enum planck_layers {
    _COLEMAK_DH,
    _LOWER,
    _RAISE,
    _ADJUST,
    _FN
};

// Layer tap keys
#define FN_COMM    LT(_FN, KC_COMM)
#define LOWER_SPC  LT(_LOWER, KC_SPC)
#define RAISE_BSPC LT(_RAISE, KC_BSPC)

// Mod tap keys
#define G_Z    GUI_T(KC_Z)
#define A_X    ALT_T(KC_X)
#define A_DOT  ALT_T(KC_DOT)
#define G_SLSH GUI_T(KC_SLSH)
#define C_ESC  CTL_T(KC_ESC)
#define S_ENT  SFT_T(KC_ENT)

// One shot mods
#define OSM_SFT OSM(MOD_LSFT)
#define OSM_CTL OSM(MOD_LCTL)
#define OSM_ALT OSM(MOD_LALT)
#define OSM_GUI OSM(MOD_LGUI)

// Combined keys
#define C_Z C(KC_Z)
#define C_X C(KC_X)
#define C_C C(KC_C)
#define C_V C(KC_V)
#define C_S C(KC_S)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // COLEMAK-DH layer, based on ANSI Colemak-DHm
    [_COLEMAK_DH] = LAYOUT(
        KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,      XXXXXXX, XXXXXXX, KC_J,       KC_L,    KC_U,    KC_Y,    KC_DEL,
        KC_A,    KC_R,    KC_S,    KC_T,    KC_G,      XXXXXXX, XXXXXXX, KC_M,       KC_N,    KC_E,    KC_I,    KC_O,
        G_Z,     A_X,     KC_C,    KC_D,    KC_V,      XXXXXXX, XXXXXXX, KC_K,       KC_H,    FN_COMM, A_DOT,   G_SLSH,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LOWER_SPC, OSM_CTL, OSM_SFT, RAISE_BSPC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    ),

    // LOWER layer, for numbers, navigation and Danish characters
    [_LOWER] = LAYOUT(
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    XXXXXXX, XXXXXXX, KC_PGUP, KC_HOME, KC_UP,   KC_END,   KC_ESC,
        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX, XXXXXXX, KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT, KC_ENT,
        OSM_GUI, OSM_ALT, OSM_CTL, KC_TAB,  KC_ESC,  XXXXXXX, XXXXXXX, CAPSWRD, KC_AE,   KC_OE,   KC_AA,    OSM_CTL,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX
    ),

    // RAISE layer, for special characters
    [_RAISE] = LAYOUT(
        KC_EXLM, KC_AT,   KC_LCBR, KC_RCBR, KC_PERC, XXXXXXX, XXXXXXX, KC_AMPR, KC_LT,   KC_GT,   KC_DQUO, KC_EQL,
        KC_CIRC, KC_DLR,  KC_LBRC, KC_RBRC, KC_HASH, XXXXXXX, XXXXXXX, KC_ASTR, KC_LPRN, KC_RPRN, KC_QUOT, KC_PLUS,
        KC_BSLS, KC_PIPE, KC_GRV,  KC_TILD, KC_QUES, XXXXXXX, XXXXXXX, KC_ENT,  KC_UNDS, KC_SCLN, KC_COLN, KC_MINS,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    ),

    // ADJUST layer, with mouse keys and board settings
    [_ADJUST] = LAYOUT(
        RESET,   XXXXXXX, KC_BRID, KC_BRIU, RGB_TOG, XXXXXXX, XXXXXXX, UC_M_WC, KC_CAPS, KC_SCRL, KC_NUM,  KC_INS,
        XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, AU_TOG,  XXXXXXX, XXXXXXX, UC_M_MA, KC_PSCR, KC_APP,  XXXXXXX, KC_RALT,
        C_Z,     C_X,     C_C,     C_V,     C_S,     XXXXXXX, XXXXXXX, UC_M_LN, KC_MPRV, KC_MPLY, KC_MSTP, KC_MNXT,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    ),

    // FN layer, for F-keys
    [_FN] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_RALT, KC_RGUI,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
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

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case G_Z:
        case A_X:
        case FN_COMM:
        case A_DOT:
        case G_SLSH:
            // Longer tapping term for main keys
            return TAPPING_TERM * 2;
        default:
            // Short tapping term for thumb keys
            return TAPPING_TERM;
    }
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
        case KC_AE ... KC_AA:
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
