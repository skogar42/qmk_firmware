This layout is inspired by [miryoku](https://github.com/manna-harbour/qmk_firmware/blob/miryoku/users/manna-harbour_miryoku/miryoku.org).

# Layers
1. R: navigation vim style
2. R: numpad and arithmetic
3. L: brackets R: symbols 
4. L: macros
    - Chrome: move to left/right tabs
    - Linux: move workspaces left/right
    - Ctags: pop up stack, go to function definition

# Mod Taps
- Home row: 
    - shift f/j
    - ctrl  d/k
    - alt   s/l
- Thumb:
    - L1 tab
    - L2 esc
    - L3 space
    - L4 enter

# TODO
- mouse layer

1. Load keymap.json into [QMK Configurator](https://config.qmk.fm)
1. Make modifications and replace keymap.json with modified json
1. make lily58:skogar:dfu or ./util/skogar_build.sh for docker env
