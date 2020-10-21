This layout is inspired by [miryoku](https://github.com/manna-harbour/qmk_firmware/blob/miryoku/users/manna-harbour_miryoku/miryoku.org).

# Layers
1. L: macros R: navigation vim style
    - Chrome: move to left/right tabs
    - Linux: move workspaces left/right
    - Ctags: pop up stack, go to function definition
    - Shortcuts: open browser, open terminal, maximize window
2. R: numpad and arithmetic
3. L: brackets R: symbols 

# Mod Taps
- Home row: 
    - shift f/j
    - ctrl  d/k
    - alt   s/l
- Thumb:
    - L1 tab
    - L2 esc
    - L3 space

# Special keys
- Ctrl+a shortcut for screen

# TODO
- move macros to separate layer so that home row mods can be used with nav
- mouse layer
- getting rid of 6th column
    - move colon or quote

# Instructions
1. Load keymap.json into [QMK Configurator](https://config.qmk.fm)
1. Make modifications and replace keymap.json with modified json
1. make lily58:skogar:dfu or ./util/skogar_build.sh for docker env
