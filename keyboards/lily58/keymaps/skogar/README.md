This layout is inspired by [miryoku](https://github.com/manna-harbour/qmk_firmware/blob/miryoku/users/manna-harbour_miryoku/miryoku.org).

# Layers
1. L: macros R: navigation vim style
	- Chrome: move to left/right tabs
	- Linux: move workspaces left/right
	- Ctags: pop up stack, go to function definition
        - Shortcuts: open browser, open terminal, maximize window
2. R: numpad and arithmetic
3. L: brackets R: symbols 

# Special keys
1. Ctrl+a shortcut for screen

# TODO
- mouse layer
- getting rid of 6th column
	- shift as hold
	- move colon or quote

# Instructions
1. Load keymap.json into [QMK Configurator](https://config.qmk.fm)
1. Make modifications and replace keymap.json with modified json
1. make lily58:skogar:dfu or ./util/skogar_build.sh for docker env
