#!/bin/bash
wget -P /tmp https://github.com/Karenahv/holbertonschool-low_level_programming/tree/master/0x18-dynamic_libraries/injectcode.so
export LD_PRELOAD=/tmp/injectcode.so
