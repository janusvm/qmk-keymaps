#pragma once

// Disable some unnecessary features
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_MUSIC_MODE

// Reduce number of allocated layers
#define LAYER_STATE_16BIT

#define FORCE_NKRO
#define UNICODE_SELECTED_MODES UC_WINC, UC_MAC, UC_LNX
#define UNICODE_CYCLE_PERSIST false

// Available subsets of pre-defined unicode characters
// #define UC_DANISH
// #define UC_ACCENTS
// #define UC_GREEK
// #define UC_SYMBOLS
// #define UC_EMOJI

// Action tapping and oneshot settings
#define ONESHOT_TIMEOUT 3000
#define TAPPING_TERM_PER_KEY
#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD_PER_KEY
#define PERMISSIVE_HOLD_PER_KEY
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY
