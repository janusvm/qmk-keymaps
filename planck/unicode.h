#pragma once

enum unicode_names {

    //  Danish letters
    AE_L, AE_U,
    OE_L, OE_U,
    AA_L, AA_U,

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
};

const uint32_t PROGMEM unicode_map[] = {

    // Danish letters
    [AE_L] = L'æ', [AE_U] = L'Æ',
    [OE_L] = L'ø', [OE_U] = L'Ø',
    [AA_L] = L'å', [AA_U] = L'Å',

    // Accented vowels
    [GRV_A_L] = L'à', [GRV_A_U] = L'À',
    [DIA_A_L] = L'ä', [DIA_A_U] = L'Ä',
    [CIR_A_L] = L'â', [CIR_A_U] = L'Â',
    [TIL_A_L] = L'ã', [TIL_A_U] = L'Ã',
    [ACU_A_L] = L'á', [ACU_A_U] = L'Á',
    [GRV_E_L] = L'è', [GRV_E_U] = L'È',
    [DIA_E_L] = L'ë', [DIA_E_U] = L'Ë',
    [CIR_E_L] = L'ê', [CIR_E_U] = L'Ê',
    [TIL_E_L] = L'ẽ', [TIL_E_U] = L'Ẽ',
    [ACU_E_L] = L'é', [ACU_E_U] = L'É',
    [GRV_I_L] = L'ì', [GRV_I_U] = L'Ì',
    [DIA_I_L] = L'ï', [DIA_I_U] = L'Ï',
    [CIR_I_L] = L'î', [CIR_I_U] = L'Î',
    [TIL_I_L] = L'ĩ', [TIL_I_U] = L'Ĩ',
    [ACU_I_L] = L'í', [ACU_I_U] = L'Í',
    [GRV_O_L] = L'ò', [GRV_O_U] = L'Ò',
    [DIA_O_L] = L'ö', [DIA_O_U] = L'Ö',
    [CIR_O_L] = L'ô', [CIR_O_U] = L'Ô',
    [TIL_O_L] = L'õ', [TIL_O_U] = L'Õ',
    [ACU_O_L] = L'ó', [ACU_O_U] = L'Ó',
    [GRV_U_L] = L'ù', [GRV_U_U] = L'Ù',
    [DIA_U_L] = L'ü', [DIA_U_U] = L'Ü',
    [CIR_U_L] = L'û', [CIR_U_U] = L'Û',
    [TIL_U_L] = L'ũ', [TIL_U_U] = L'Ũ',
    [ACU_U_L] = L'ú', [ACU_U_U] = L'Ú',
    [GRV_Y_L] = L'ỳ', [GRV_Y_U] = L'Ỳ',
    [DIA_Y_L] = L'ÿ', [DIA_Y_U] = L'Ÿ',
    [CIR_Y_L] = L'ŷ', [CIR_Y_U] = L'Ŷ',
    [TIL_Y_L] = L'ỹ', [TIL_Y_U] = L'Ỹ',
    [ACU_Y_L] = L'ý', [ACU_Y_U] = L'Ý',

    // Greek letters
    [ALPHA_L]   = L'α', [ALPHA_U]   = L'Α',
    [BETA_L]    = L'β', [BETA_U]    = L'Β',
    [GAMMA_L]   = L'γ', [GAMMA_U]   = L'Γ',
    [DELTA_L]   = L'δ', [DELTA_U]   = L'Δ',
    [EPSILON_L] = L'ε', [EPSILON_U] = L'Ε',
    [ZETA_L]    = L'ζ', [ZETA_U]    = L'Ζ',
    [ETA_L]     = L'η', [ETA_U]     = L'Η',
    [THETA_L]   = L'θ', [THETA_U]   = L'Θ',
    [IOTA_L]    = L'ι', [IOTA_U]    = L'Ι',
    [KAPPA_L]   = L'κ', [KAPPA_U]   = L'Κ',
    [LAMBDA_L]  = L'λ', [LAMBDA_U]  = L'Λ',
    [MU_L]      = L'μ', [MU_U]      = L'Μ',
    [NU_L]      = L'ν', [NU_U]      = L'Ν',
    [XI_L]      = L'ξ', [XI_U]      = L'Ξ',
    [OMICRON_L] = L'ο', [OMICRON_U] = L'Ο',
    [PI_L]      = L'π', [PI_U]      = L'Π',
    [RHO_L]     = L'ρ', [RHO_U]     = L'Ρ',
    [SIGMA_L]   = L'σ', [SIGMA_U]   = L'Σ',
    [TAU_L]     = L'τ', [TAU_U]     = L'Τ',
    [UPSILON_L] = L'υ', [UPSILON_U] = L'Υ',
    [PHI_L]     = L'φ', [PHI_U]     = L'Φ',
    [CHI_L]     = L'χ', [CHI_U]     = L'Χ',
    [PSI_L]     = L'ψ', [PSI_U]     = L'Ψ',
    [OMEGA_L]   = L'ω', [OMEGA_U]   = L'Ω',

    // Miscellaneous symbols
    [HALF]         = L'½',
    [SQUARED]      = L'²',
    [EURO]         = L'€',
    [REGISTERED]   = L'®',
    [TRADEMARK]    = L'™',
    [JPY]          = L'¥',
    [UNION]        = L'∪',
    [INFTY]        = L'∞',
    [DEGREES]      = L'°',
    [NEQ]          = L'≠',
    [INTERSECTION] = L'∩',
    [SQRT]         = L'√',
    [PARTIAL]      = L'∂',
    [INTEGRAL]     = L'∫',
    [GRADIENT]     = L'∇',
    [LEFT_ARROW]   = L'←',
    [DOWN_ARROW]   = L'↓',
    [UP_ARROW]     = L'↑',
    [RIGHT_ARROW]  = L'→',
    [PLUS_MINUS]   = L'±',
    [EMPTY_SET]    = L'∅',
    [SOLID_BLOCK]  = L'█',
    [MEDIUM_BLOCK] = L'▒',
    [COPYRIGHT]    = L'©',
    [ELEMENT_OF]   = L'∈',
    [GBP]          = L'£',
    [EN_DASH]      = L'–',
    [EM_DASH]      = L'—',
    [NOT]          = L'¬',
    [BULLET]       = L'•',
    [TIMES]        = L'×',

    // Emoji
    [GRIN]           = 0x1F604,  // 😄
    [SWEAT_SMILE]    = 0x1F605,  // 😅
    [JOY]            = 0x1f602,  // 😂
    [UPSIDE_DOWN]    = 0x1f643,  // 🙃
    [WINK]           = 0x1f609,  // 😉
    [SMILE]          = 0x1f60a,  // 😊
    [HEART_EYES]     = 0x1f60d,  // 😍
    [WINK_KISS]      = 0x1f618,  // 😘
    [WINK_TONGUE]    = 0x1f61c,  // 😜
    [ZANY]           = 0x1f92a,  // 🤪
    [SHUSH]          = 0x1f92b,  // 🤫
    [THINKING]       = 0x1f914,  // 🤔
    [RAISED_EYEBROW] = 0x1f928,  // 🤨
    [SMIRK]          = 0x1f60f,  // 😏
    [UNAMUSED]       = 0x1f612,  // 😒
    [ROLLING_EYES]   = 0x1f644,  // 🙄
    [GRIMACE]        = 0x1f62c,  // 😬
    [RELIEVED]       = 0x1f60c,  // 😌
    [PENSIVE]        = 0x1f614,  // 😔
    [FLUSHED]        = 0x1f633,  // 😳
    [PLEADING]       = 0x1f97a,  // 🥺
    [SOB]            = 0x1f62d,  // 😭
    [WEARY]          = 0x1f629,  // 😩
    [TRIUMPH]        = 0x1f624,  // 😤
    [POOP]           = 0x1f4a9,  // 💩
    [OK_HAND]        = 0x1f44c,  // 👌
    [POINT_RIGHT]    = 0x1f449,  // 👉
    [THUMBS_UP]      = 0x1f44d,  // 👍
    [CLAP]           = 0x1f44f,  // 👏
    [PRAY]           = 0x1f64f,  // 🙏
    [BRAIN]          = 0x1f9e0,  // 🧠
    [EYES]           = 0x1f440,  // 👀
    [SWEAT]          = 0x1f4a6,  // 💦
    [FIRE]           = 0x1f525,  // 🔥
    [SPARKLES]       = 0x2728,   // ✨
    [MONEY]          = 0x1f4b0,  // 💰
    [HEARTS]         = 0x1f495,  // 💕
    [HUNDRED]        = 0x1f4af,  // 💯
    [WARNING]        = 0x26a0,   // ⚠
    [NO_ENTRY]       = 0x26d4,   // ⛔
    [CHECK]          = 0x2705,   // ✅
    [B_BUTTON]       = 0x1f171   // 🅱
};

#define KC_AE      XP(AE_L,      AE_U)
#define KC_OE      XP(OE_L,      OE_U)
#define KC_AA      XP(AA_L,      AA_U)

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
