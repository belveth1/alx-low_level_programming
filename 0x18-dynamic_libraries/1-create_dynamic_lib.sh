#!/bin/bash

gcc -fPIC -c *.c
gcc -shared -o liball.so *.o
rm *.o
export LD_LIBRARY_PATH=/liball.so:$LD_LIBRARY_PATH
