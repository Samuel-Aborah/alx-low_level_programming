#!/bin/bash
gcc -Wall -Wextrea -Werror
-pedantic -c *.c
ar rc liball.a *.o
