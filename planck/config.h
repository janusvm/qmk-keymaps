#pragma once

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(PLANCK_SOUND)
    // #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
        SONG(COLEMAK_SOUND),                          \
        SONG(DVORAK_SOUND)                            \
      }
    #define UNICODE_SONG_MAC  SONG(AUDIO_ON_SOUND)
    #define UNICODE_SONG_LNX  SONG(UNICODE_LINUX)
    #define UNICODE_SONG_BSD  SONG(TERMINAL_SOUND)
    #define UNICODE_SONG_WIN  SONG(UNICODE_WINDOWS)
    #define UNICODE_SONG_WINC SONG(UNICODE_WINDOWS)
#endif

#define TAPPING_TOGGLE 2
#define ONESHOT_TAP_TOGGLE 2
#define ONESHOT_TIMEOUT 1500

// Settings for home row mods
#define TAPPING_TERM 150
#define TAPPING_TERM_PER_KEY
#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD_PER_KEY
#define PERMISSIVE_HOLD
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY

// Layout macro with predefined KC-prefixes
#define KEYMAP_kc(                                                      \
    L00, L01, L02, L03, L04, L05, R00, R01, R02, R03, R04, R05,         \
    L10, L11, L12, L13, L14, L15, R10, R11, R12, R13, R14, R15,         \
    L20, L21, L22, L23, L24, L25, R20, R21, R22, R23, R24, R25,         \
    L30, L31, L32, L33, L34, L35, R30, R31, R32, R33, R34, R35          \
    )                                                                   \
    LAYOUT_ortho_4x12(                                                  \
        KC_##L00, KC_##L01, KC_##L02, KC_##L03, KC_##L04, KC_##L05, KC_##R00, KC_##R01, KC_##R02, KC_##R03, KC_##R04, KC_##R05, \
        KC_##L10, KC_##L11, KC_##L12, KC_##L13, KC_##L14, KC_##L15, KC_##R10, KC_##R11, KC_##R12, KC_##R13, KC_##R14, KC_##R15, \
        KC_##L20, KC_##L21, KC_##L22, KC_##L23, KC_##L24, KC_##L25, KC_##R20, KC_##R21, KC_##R22, KC_##R23, KC_##R24, KC_##R25, \
        KC_##L30, KC_##L31, KC_##L32, KC_##L33, KC_##L34, KC_##L35, KC_##R30, KC_##R31, KC_##R32, KC_##R33, KC_##R34, KC_##R35 \
        )

// Home row mod layout macro
#define HRM_KEYMAP_kc(                                                  \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b,         \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b,         \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b,         \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b          \
    )                                                                   \
    LAYOUT_ortho_4x12(                                                  \
        KC_##k00,        KC_##k01,        KC_##k02,        KC_##k03,        KC_##k04, KC_##k05, KC_##k06, KC_##k07, KC_##k08,        KC_##k09,        KC_##k0a,        KC_##k0b, \
        GUI_T(KC_##k10), ALT_T(KC_##k11), CTL_T(KC_##k12), SFT_T(KC_##k13), KC_##k14, KC_##k15, KC_##k16, KC_##k17, SFT_T(KC_##k18), CTL_T(KC_##k19), ALT_T(KC_##k1a), GUI_T(KC_##k1b), \
        KC_##k20,        KC_##k21,        KC_##k22,        KC_##k23,        KC_##k24, KC_##k25, KC_##k26, KC_##k27, KC_##k28,        KC_##k29,        KC_##k2a,        KC_##k2b, \
        KC_##k30,        KC_##k31,        KC_##k32,        KC_##k33,        KC_##k34, KC_##k35, KC_##k36, KC_##k37, KC_##k38,        KC_##k39,        KC_##k3a,        KC_##k3b \
        )

// Home row mod layout macro with mods only on the left hand side
#define HRM_L_KEYMAP_kc(                                                \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b,         \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b,         \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b,         \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b          \
    )                                                                   \
    LAYOUT_ortho_4x12(                                                  \
        KC_##k00,        KC_##k01,        KC_##k02,        KC_##k03,        KC_##k04, KC_##k05, KC_##k06, KC_##k07, KC_##k08, KC_##k09, KC_##k0a, KC_##k0b, \
        GUI_T(KC_##k10), ALT_T(KC_##k11), CTL_T(KC_##k12), SFT_T(KC_##k13), KC_##k14, KC_##k15, KC_##k16, KC_##k17, KC_##k18, KC_##k19, KC_##k1a, KC_##k1b, \
        KC_##k20,        KC_##k21,        KC_##k22,        KC_##k23,        KC_##k24, KC_##k25, KC_##k26, KC_##k27, KC_##k28, KC_##k29, KC_##k2a, KC_##k2b, \
        KC_##k30,        KC_##k31,        KC_##k32,        KC_##k33,        KC_##k34, KC_##k35, KC_##k36, KC_##k37, KC_##k38, KC_##k39, KC_##k3a, KC_##k3b \
        )
