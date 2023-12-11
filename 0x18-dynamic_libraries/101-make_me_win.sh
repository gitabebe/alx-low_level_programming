#!/bin/bash
wget -P /tmp https://github.com/gitabebe/alx-low_level_programming/raw/master/0x18-dynamic_libraries/tests/101-make_me_win.so
export LD_PRELOAD=/tmp/101-make_me_win.so
