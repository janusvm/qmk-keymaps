#include QMK_KEYBOARD_H
#include "keymap_danish.h"

// Layers
enum kbd67_layers {
  _COLEMAK_DH,
  _QWERTY,
  _FN
};

#define KC_FN MO(_FN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK_DH] = LAYOUT_65_iso_split_space(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    DK_PLUS, DK_ACUT, /*****/  KC_DEL,  KC_HOME,
        KC_TAB,  /*****/  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    DK_DIAE, KC_J,    KC_L,    KC_U,    KC_Y,    DK_AE,   DK_ARNG, /*****/  KC_PGUP,
        KC_LCTL, /*****/  KC_A,    KC_R,    KC_S,    KC_T,    KC_G,    DK_QUOT, KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    DK_OSTR, KC_ENT,  KC_PGDN,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    DK_LABK, DK_MINS, KC_K,    KC_H,    KC_COMM, KC_DOT,  /*****/  KC_RSFT, KC_UP,   KC_END,
        CAPSWRD, KC_LGUI, /*****/  KC_LALT, KC_SPC,  /*****/  KC_ALGR, /*****/  KC_BSPC, /*****/  KC_RGUI, KC_FN,   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
        ),
    [_FN] = LAYOUT_65_iso_split_space(
        QK_BOOT, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  /*****/  _______, KC_PSCR,
        _______, /*****/  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, /*****/  KC_INS,
        _______, /*****/  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_VOLU,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, /*****/  _______, _______, KC_VOLD,
        _______, _______, /*****/  _______, _______, /*****/  _______, /*****/  _______, /*****/  _______, _______, _______, _______, _______, _______
        )
};

bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        case DK_MINS:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case DK_UNDS:
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}
