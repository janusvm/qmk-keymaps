SRC += janusvm.c
SRC += unicode.c

BOOTMAGIC_ENABLE   = yes # Enable resetting by holding the (0,0) key while plugging in
CAPS_WORD_ENABLE   = yes # Enable temporary caps key
EXTRAKEY_ENABLE	   = yes # Needed for system keys
LTO_ENABLE         = yes # Optimization
MOUSEKEY_ENABLE	   = yes # Needed for mouse back/forward keys
NKRO_ENABLE        = yes # N-key rollover
UNICODE_ENABLE	   = no  # Conflicts with UNICODEMAP

# Disable unneeded or unsupported features
COMMAND_ENABLE     = no
CONSOLE_ENABLE     = no
GRAVE_ESC_ENABLE   = no
MAGIC_ENABLE       = no
SPACE_CADET_ENABLE = no

# Options that very between boards
AUDIO_ENABLE      ?= no
BACKLIGHT_ENABLE  ?= no
RGBLIGHT_ENABLE   ?= no
SPLIT_KEYBOARD    ?= no
UNICODEMAP_ENABLE ?= no  # Unicode support up to code point 0x10FFFF
