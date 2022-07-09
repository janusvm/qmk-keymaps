#include "janusvm.h"

uint16_t get_tapping_term_per_key(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LOWER_SPC:
        case RAISE_BSPC:
        case RAISE_ENT:
        case FN_TAB:
        case ACCENT_ESC:
            return 200;
        case SFT_T(KC_T):
        case SFT_T(KC_N):
        case SFT_T(KC_9):
        case SFT_T(KC_F9):
        case SFT_T(KC_P4):
        case CTL_T(KC_S):
        case CTL_T(KC_E):
        case CTL_T(KC_8):
        case CTL_T(KC_F8):
        case CTL_T(KC_P5):
            return 250;
        default:
            return 400;
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

bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LOWER_SPC:
        case RAISE_BSPC:
        case RAISE_ENT:
        case FN_TAB:
        case ACCENT_ESC:
        case SFT_T(KC_T):
        case SFT_T(KC_N):
        case SFT_T(KC_9):
        case SFT_T(KC_F9):
        case SFT_T(KC_P4):
        case CTL_T(KC_S):
        case CTL_T(KC_E):
        case CTL_T(KC_8):
        case CTL_T(KC_F8):
        case CTL_T(KC_P5):
            // Enable PERMISSIVE_HOLD for thumb, index, and long finger keys
            return true;
        default:
            return false;
    }
}

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LOWER_SPC:
        case RAISE_BSPC:
        case RAISE_ENT:
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
