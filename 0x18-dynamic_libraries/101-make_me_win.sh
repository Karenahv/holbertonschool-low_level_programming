#!/bin/bash
wget -P /tmp https://https://github.com/Karenahv/holbertonschool-low_level_progr
amming/tree/master/0x18-dynamic_libraries/injectcode.so
export LD_PRELOAD=/tmp/injectcode.so
