# janusvm's keymap for the OLKB Planck

The Planck was my first foray into QMK and customizing the layout of a keyboard beyond just rebinding a key or two.
Over time, as I have uncovered what I really want from a keyboard, this layout has become very sharply tailored to those needs, and as such feature:

* [Colemak-DH](https://colemakmods.github.io/mod-dh) base layout
* [Home row mods](https://precondition.github.io/home-row-mods)
* Wide, pseudo-split arrangement of alphas
* Support for Danish characters (Æ, Ø, Å)
* Programming-friendly placement of non-alphas that require at most one modifier or layer key to be held to reach
* RGB indication of layer status

## Layers

The layer configuration is based on having the system keyboard set to a US QWERTY layout.
While this requires a bit of (sometimes awkward) workarounds for typing Danish letters, since I mostly type in English, I don't mind too much.

### Base

![](img/planck-base-colemak-dh.png)

The base layer contains all the alphas except ÆØÅ, arranged in the matrix version [Colemak-DH](https://colemakmods.github.io/mod-dh) layout, with the top right semicolon key replaced with Delete for easier access.

Instead of having an outer edge of modifier keys, the layout is "split" in half down the middle and moved one column outwards.
This gives an ever-so-slightly more ergonomic typing experience — not quite on the level of a true, split keyboard, when it comes to shoulder position, but the reduced usage of the pinkies is quite noticable.

Modifier keys are placed on the home row on both sides, as [Mod-Tap](https://docs.qmk.fm/#/mod_tap) (dual purpose) keys.
Letter keys when tapped, modifier keys when held.
The timing and behaviour of these Mod-Tap keys are tuned differently for each finger; the index and longfinger have shorter `TAPPING_TERM` than the ringfinger and pinky.

The main layer keys, LOWER and RAISE, also serve dual purposes as Space and Backspace, respectively.
Ditto for the Tab key, which when held activates the Fn layer.

<!--
### Lower

![](https://i.imgur.com/ykOKKgG.png)

The lower layer's main feature are the Vim-like arrow keys on HJKL and the number row.
An additional Super and Alt keys are placed on the left side of the home row for certain keybindings such as Alt+[arrow keys].
The number row is there for familiarity, and some common Ctrl combinations are put on their respective keys.
This makes it so that I don't have to use my pinky for Ctrl and thereby shift my other fingers to "wrong" keys to input combinations.

Tab and Backspace are changed to Ctrl+Del and Ctrl+Backspace, respectively, and thus delete a word in the direction of the arrow on the keycap.

### Raise

![](https://i.imgur.com/2jBJhEZ.png)

The Raise layer has standard special characters usually available on a regular keyboard as well as Danish, Shift-able letters Æ, Ø, and Å.
The characters are placed such that:

* Bracket delimiters (`() [] {} <>`) are available at the prime spots for paired keys.
While most editors automatically insert the closing bracket, I tend to use paired brackets in navigation-related keybindings, so I need opening and closing brackets next to each other.
* Several symbols (`! @ % & = \`) are at or close to their usual position on an ISO Danish keyboard
* Certain symbols that pair up in Emacs and Vim-like keybindings (`^ $`, `# *`, and `= + -`) are placed together
* Æ, Ø, and Å are on their usual keys

Additionally, this layer replaces Backspace with Delete and Tab with Esc, the latter specifically so that I can input Ctrl+Shift+Esc to get the Task Manager on Windows.

### Adjust

![](https://i.imgur.com/oe4sd2Y.png)

Keyboard settings and mouse keys layer, reached by holding Lower and Raise simoultaneously.
This layer also has some additional commands like Print Screen, Caps Lock, and media control keys.

**TODO:** the EN Mode and DA Mode keys currently do nothing.

### Fn/Numpad

![](https://i.imgur.com/P2Yquam.png)

Tap-toggle layer with F-keys and a numpad positioned such the 0 sits on the 2u space bar.

### Greek

![](https://i.imgur.com/pCBLx9V.png)

This layer simply has the Greek alphabet as Shift-able letters, mapped to their logical Latin equivalent.

### Symbols

![](https://i.imgur.com/g8861fn.png)

This layer features my most used special unicode characters.
They are placed such that most of them make sense mnemonically, i.e.

* `€ ® ™ ¥ ∞ √ ∇ © £ – —` have names that start with the letter of the key they occupy
* `∪ ∩ ∂ ∫ ¬ •` look a bit like the symbol of their key (some more than others)
* `² ≠ ° ← ↓ ↑ → × ∅` look a bit like symbols related to a secondary function of their key

### Emoji

![](https://i.imgur.com/ov1YNio.png)

This layer features quick access to my favourite unicode emoji, mainly so I can avoid using the built-in emoji pickers of Windows, Facebook, and Twitter (as they are either cumbersome or really slow to use).
While all modifier keys from the base layers have been assigned emoji, Space, Backspace, Lower, and Raise are kept for easier entry of multiple emoji.

The emoji are placed such that, as much as possible, the emoji of each column are somewhat related to each other:

* Happy faces 😄 😅 😂 😊
* Affectionate faces 😳 😍 🤪 🥺
* Sad faces 😩 😭 😔
* Flirty faces 😉 😘 😜 😏
* Sarcastic/teasing faces 🙄 🤨 😒
* Other faces 🤔 🙃 💩
* Status symbols ✅ ⚠ ⛔
* Hands 👉 👌 👏 👍 (🙏)
* Meme/injoke stuff 👀 🧠 🅱
* Symbols 💰 ✨ 💯 🔥
* Face modifers 💦 💕

-->
