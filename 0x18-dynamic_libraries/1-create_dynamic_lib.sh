#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c -fpic *.c
gcc -shared -o liball.so .*o
sudo cp liball.so/usr/lib
