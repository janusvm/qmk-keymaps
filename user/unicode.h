#pragma once
#include QMK_KEYBOARD_H

#ifdef UNICODEMAP_ENABLE
enum unicode_names {

#ifdef UC_DANISH
    //  Danish letters
    AE_L, AE_U,
    OE_L, OE_U,
    AA_L, AA_U,
#endif // UC_DANISH

#ifdef UC_ACCENTS
    // Accented vowels
    GRV_A_L, GRV_A_U,
    DIA_A_L, DIA_A_U,
    CIR_A_L, CIR_A_U,
    TIL_A_L, TIL_A_U,
    ACU_A_L, ACU_A_U,
    GRV_E_L, GRV_E_U,
    DIA_E_L, DIA_E_U,
    CIR_E_L, CIR_E_U,
    TIL_E_L, TIL_E_U,
    ACU_E_L, ACU_E_U,
    GRV_I_L, GRV_I_U,
    DIA_I_L, DIA_I_U,
    CIR_I_L, CIR_I_U,
    TIL_I_L, TIL_I_U,
    ACU_I_L, ACU_I_U,
    GRV_O_L, GRV_O_U,
    DIA_O_L, DIA_O_U,
    CIR_O_L, CIR_O_U,
    TIL_O_L, TIL_O_U,
    ACU_O_L, ACU_O_U,
    GRV_U_L, GRV_U_U,
    DIA_U_L, DIA_U_U,
    CIR_U_L, CIR_U_U,
    TIL_U_L, TIL_U_U,
    ACU_U_L, ACU_U_U,
    GRV_Y_L, GRV_Y_U,
    DIA_Y_L, DIA_Y_U,
    CIR_Y_L, CIR_Y_U,
    TIL_Y_L, TIL_Y_U,
    ACU_Y_L, ACU_Y_U,
#endif // UC_ACCENTS

#ifdef UC_GREEK
    // Greek letters
    ALPHA_L,   ALPHA_U,
    BETA_L,    BETA_U,
    GAMMA_L,   GAMMA_U,
    DELTA_L,   DELTA_U,
    EPSILON_L, EPSILON_U,
    ZETA_L,    ZETA_U,
    ETA_L,     ETA_U,
    THETA_L,   THETA_U,
    IOTA_L,    IOTA_U,
    KAPPA_L,   KAPPA_U,
    LAMBDA_L,  LAMBDA_U,
    MU_L,      MU_U,
    NU_L,      NU_U,
    XI_L,      XI_U,
    OMICRON_L, OMICRON_U,
    PI_L,      PI_U,
    RHO_L,     RHO_U,
    SIGMA_L,   SIGMA_U,
    TAU_L,     TAU_U,
    UPSILON_L, UPSILON_U,
    PHI_L,     PHI_U,
    CHI_L,     CHI_U,
    PSI_L,     PSI_U,
    OMEGA_L,   OMEGA_U,
#endif // UC_GREEK

#ifdef UC_SYMBOLS
    // Miscellaneous symbols
    HALF,
    SQUARED,
    EURO,
    REGISTERED,
    TRADEMARK,
    JPY,
    UNION,
    INFTY,
    DEGREES,
    NEQ,
    INTERSECTION,
    SQRT,
    PARTIAL,
    INTEGRAL,
    GRADIENT,
    LEFT_ARROW,
    DOWN_ARROW,
    UP_ARROW,
    RIGHT_ARROW,
    PLUS_MINUS,
    EMPTY_SET,
    SOLID_BLOCK,
    MEDIUM_BLOCK,
    COPYRIGHT,
    ELEMENT_OF,
    GBP,
    EN_DASH,
    EM_DASH,
    NOT,
    BULLET,
    TIMES,
    CHECK_MARK,
    CROSS_MARK,
#endif // UC_SYMBOLS

#ifdef UC_EMOJI
    // Emoji
    GRIN,
    SWEAT_SMILE,
    JOY,
    UPSIDE_DOWN,
    WINK,
    SMILE,
    HEART_EYES,
    WINK_KISS,
    WINK_TONGUE,
    ZANY,
    SHUSH,
    THINKING,
    RAISED_EYEBROW,
    SMIRK,
    UNAMUSED,
    ROLLING_EYES,
    GRIMACE,
    RELIEVED,
    PENSIVE,
    FLUSHED,
    PLEADING,
    SOB,
    WEARY ,
    TRIUMPH,
    POOP,
    OK_HAND,
    POINT_RIGHT,
    THUMBS_UP,
    CLAP,
    PRAY,
    BRAIN,
    EYES,
    SWEAT,
    FIRE,
    SPARKLES,
    MONEY,
    HEARTS,
    HUNDRED,
    WARNING,
    NO_ENTRY,
    CHECK,
    B_BUTTON
#endif // UC_EMOJI
};

#ifdef UC_DANISH
#define KC_AE XP(AE_L, AE_U)
#define KC_OE XP(OE_L, OE_U)
#define KC_AA XP(AA_L, AA_U)
#endif // UC_DANISH

#ifdef UC_ACCENTS
#define KC_GRV_A XP(GRV_A_L, GRV_A_U)
#define KC_DIA_A XP(DIA_A_L, DIA_A_U)
#define KC_CIR_A XP(CIR_A_L, CIR_A_U)
#define KC_TIL_A XP(TIL_A_L, TIL_A_U)
#define KC_ACU_A XP(ACU_A_L, ACU_A_U)
#define KC_GRV_E XP(GRV_E_L, GRV_E_U)
#define KC_DIA_E XP(DIA_E_L, DIA_E_U)
#define KC_CIR_E XP(CIR_E_L, CIR_E_U)
#define KC_TIL_E XP(TIL_E_L, TIL_E_U)
#define KC_ACU_E XP(ACU_E_L, ACU_E_U)
#define KC_GRV_I XP(GRV_I_L, GRV_I_U)
#define KC_DIA_I XP(DIA_I_L, DIA_I_U)
#define KC_CIR_I XP(CIR_I_L, CIR_I_U)
#define KC_TIL_I XP(TIL_I_L, TIL_I_U)
#define KC_ACU_I XP(ACU_I_L, ACU_I_U)
#define KC_GRV_O XP(GRV_O_L, GRV_O_U)
#define KC_DIA_O XP(DIA_O_L, DIA_O_U)
#define KC_CIR_O XP(CIR_O_L, CIR_O_U)
#define KC_TIL_O XP(TIL_O_L, TIL_O_U)
#define KC_ACU_O XP(ACU_O_L, ACU_O_U)
#define KC_GRV_U XP(GRV_U_L, GRV_U_U)
#define KC_DIA_U XP(DIA_U_L, DIA_U_U)
#define KC_CIR_U XP(CIR_U_L, CIR_U_U)
#define KC_TIL_U XP(TIL_U_L, TIL_U_U)
#define KC_ACU_U XP(ACU_U_L, ACU_U_U)
#define KC_GRV_Y XP(GRV_Y_L, GRV_Y_U)
#define KC_DIA_Y XP(DIA_Y_L, DIA_Y_U)
#define KC_CIR_Y XP(CIR_Y_L, CIR_Y_U)
#define KC_TIL_Y XP(TIL_Y_L, TIL_Y_U)
#define KC_ACU_Y XP(ACU_Y_L, ACU_Y_U)
#endif // UC_ACCENTS

#ifdef UC_GREEK
#define KC_ALPHA   XP(ALPHA_L,   ALPHA_U)
#define KC_BETA    XP(BETA_L,    BETA_U)
#define KC_GAMMA   XP(GAMMA_L,   GAMMA_U)
#define KC_DELTA   XP(DELTA_L,   DELTA_U)
#define KC_EPSILON XP(EPSILON_L, EPSILON_U)
#define KC_ZETA    XP(ZETA_L,    ZETA_U)
#define KC_ETA     XP(ETA_L,     ETA_U)
#define KC_THETA   XP(THETA_L,   THETA_U)
#define KC_IOTA    XP(IOTA_L,    IOTA_U)
#define KC_KAPPA   XP(KAPPA_L,   KAPPA_U)
#define KC_LAMBDA  XP(LAMBDA_L,  LAMBDA_U)
#define KC_MU      XP(MU_L,      MU_U)
#define KC_NU      XP(NU_L,      NU_U)
#define KC_XI      XP(XI_L,      XI_U)
#define KC_OMICRON XP(OMICRON_L, OMICRON_U)
#define KC_PI      XP(PI_L,      PI_U)
#define KC_RHO     XP(RHO_L,     RHO_U)
#define KC_SIGMA   XP(SIGMA_L,   SIGMA_U)
#define KC_TAU     XP(TAU_L,     TAU_U)
#define KC_UPSILON XP(UPSILON_L, UPSILON_U)
#define KC_PHI     XP(PHI_L,     PHI_U)
#define KC_CHI     XP(CHI_L,     CHI_U)
#define KC_PSI     XP(PSI_L,     PSI_U)
#define KC_OMEGA   XP(OMEGA_L,   OMEGA_U)
#endif // UC_GREEK

#ifdef UC_SYMBOLS
#define KC_HALF         X(HALF)
#define KC_SQUARED      X(SQUARED)
#define KC_EURO         X(EURO)
#define KC_REGISTERED   X(REGISTERED)
#define KC_TRADEMARK    X(TRADEMARK)
#define KC_JPY          X(JPY)
#define KC_UNION        X(UNION)
#define KC_INFTY        X(INFTY)
#define KC_DEGREES      X(DEGREES)
#define KC_NEQ          X(NEQ)
#define KC_INTERSECTION X(INTERSECTION)
#define KC_SQRT         X(SQRT)
#define KC_PARTIAL      X(PARTIAL)
#define KC_INTEGRAL     X(INTEGRAL)
#define KC_GRADIENT     X(GRADIENT)
#define KC_LEFT_ARROW   X(LEFT_ARROW)
#define KC_DOWN_ARROW   X(DOWN_ARROW)
#define KC_UP_ARROW     X(UP_ARROW)
#define KC_RIGHT_ARROW  X(RIGHT_ARROW)
#define KC_PLUS_MINUS   X(PLUS_MINUS)
#define KC_EMPTY_SET    X(EMPTY_SET)
#define KC_SOLID_BLOCK  X(SOLID_BLOCK)
#define KC_MEDIUM_BLOCK X(MEDIUM_BLOCK)
#define KC_COPYRIGHT    X(COPYRIGHT)
#define KC_ELEMENT_OF   X(ELEMENT_OF)
#define KC_GBP          X(GBP)
#define KC_EN_DASH      X(EN_DASH)
#define KC_EM_DASH      X(EM_DASH)
#define KC_NOT          X(NOT)
#define KC_BULLET       X(BULLET)
#define KC_TIMES        X(TIMES)
#define KC_CHECK_MARK   X(CHECK_MARK)
#define KC_CROSS_MARK   X(CROSS_MARK)
#endif // UC_SYMBOLS

#ifdef UC_EMOJI
#define KC_GRIN           X(GRIN)
#define KC_SWEAT_SMILE    X(SWEAT_SMILE)
#define KC_JOY            X(JOY)
#define KC_UPSIDE_DOWN    X(UPSIDE_DOWN)
#define KC_WINK           X(WINK)
#define KC_SMILE          X(SMILE)
#define KC_HEART_EYES     X(HEART_EYES)
#define KC_WINK_KISS      X(WINK_KISS)
#define KC_WINK_TONGUE    X(WINK_TONGUE)
#define KC_ZANY           X(ZANY)
#define KC_SHUSH          X(SHUSH)
#define KC_THINKING       X(THINKING)
#define KC_RAISED_EYEBROW X(RAISED_EYEBROW)
#define KC_SMIRK          X(SMIRK)
#define KC_UNAMUSED       X(UNAMUSED)
#define KC_ROLLING_EYES   X(ROLLING_EYES)
#define KC_GRIMACE        X(GRIMACE)
#define KC_RELIEVED       X(RELIEVED)
#define KC_PENSIVE        X(PENSIVE)
#define KC_FLUSHED        X(FLUSHED)
#define KC_PLEADING       X(PLEADING)
#define KC_SOB            X(SOB)
#define KC_WEARY          X(WEARY)
#define KC_TRIUMPH        X(TRIUMPH)
#define KC_POOP           X(POOP)
#define KC_OK_HAND        X(OK_HAND)
#define KC_POINT_RIGHT    X(POINT_RIGHT)
#define KC_THUMBS_UP      X(THUMBS_UP)
#define KC_CLAP           X(CLAP)
#define KC_PRAY           X(PRAY)
#define KC_BRAIN          X(BRAIN)
#define KC_EYES           X(EYES)
#define KC_SWEAT          X(SWEAT)
#define KC_FIRE           X(FIRE)
#define KC_SPARKLES       X(SPARKLES)
#define KC_MONEY          X(MONEY)
#define KC_HEARTS         X(HEARTS)
#define KC_HUNDRED        X(HUNDRED)
#define KC_WARNING        X(WARNING)
#define KC_NO_ENTRY       X(NO_ENTRY)
#define KC_CHECK          X(CHECK)
#define KC_B_BUTTON       X(B_BUTTON)
#endif // UC_EMOJI
#endif // UNICODEMAP_ENABLE
