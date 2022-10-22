#include "janusvm.h"
#ifdef DK_MODE_ENABLE
#include "keymap_danish.h"
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
            }
            return false;
        case COLEMAK:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_COLEMAK);
            }
            return false;
    }
    return true;
}

uint16_t get_tapping_term_per_key(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LOWER_SPC:
        case RAISE_BSPC:
        case RAISE_ENT:
        case FN_TAB:
        case ACCENT_ESC:
        case ACCENT_TAB:
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
        // Enable PERMISSIVE_HOLD for thumb, index, and long finger keys on ortho keymaps
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
        // Keys for other keymaps
        case ACCENT_TAB:
            return true;
        default:
            return false;
    }
}

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // Enable HOLD_ON_OTHER_KEY_PRESS for just the thumb keys on ortho keymaps
        case LOWER_SPC:
        case RAISE_BSPC:
        case RAISE_ENT:
        case FN_TAB:
        case ACCENT_ESC:
        // Keys for other keymaps
        case ACCENT_TAB:
            return true;
        default:
            return false;
    }
}

#ifdef CAPS_WORD_ENABLE
bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
#ifdef DK_MODE_ENABLE
        case DK_AE:
        case DK_OSTR:
        case DK_ARNG:
#endif
#ifdef UC_DANISH
        case KC_AE ... KC_AA:
#endif // UC_DANISH
#ifdef UC_ACCENTS
        case KC_GRV_A ... KC_ACU_Y:
#endif // UC_ACCENTS
#ifdef UC_GREEK
        case KC_ALPHA ... KC_OMEGA:
#endif // UC_GREEK
            add_weak_mods(MOD_BIT(KC_LSFT));
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_LSFT:
        case KC_RSFT:
#ifdef DK_MODE_ENABLE
        case DK_MINS:
        case DK_UNDS:
#else
        case KC_MINS:
        case KC_UNDS:
#endif // DK_MODE_ENABLE
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}
#endif // CAPS_WORD_ENABLE
