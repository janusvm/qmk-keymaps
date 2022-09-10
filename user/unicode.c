#include "unicode.h"

#ifdef UNICODEMAP_ENABLE
const uint32_t PROGMEM unicode_map[] = {

#ifdef UC_DANISH
    // Danish letters
    [AE_L] = L'æ', [AE_U] = L'Æ',
    [OE_L] = L'ø', [OE_U] = L'Ø',
    [AA_L] = L'å', [AA_U] = L'Å',
#endif // UC_DANISH

#ifdef UC_ACCENTS
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
#endif // UC_ACCENTS

#ifdef UC_GREEK
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
#endif // UC_GREEK

#ifdef UC_SYMBOLS
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
    [CHECK_MARK]   = L'✓',
    [CROSS_MARK]   = L'✗',
#endif // UC_SYMBOLS

#ifdef UC_EMOJI
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
#endif // UC_EMOJI
};
#endif // UNICODEMAP_ENABLE
