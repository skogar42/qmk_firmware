./keyboards/ferris/keymaps/json2crab.py --input ./keyboards/ferris/keymaps/skogar/default.json > ./keyboards/ferris/keymaps/skogar/keymap.json
sudo ./util/docker_build.sh ferris/0_2:skogar:flash
