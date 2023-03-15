#!/bin/bash
gcc -Wall -Waxtra -Werror -c *.c
ar -rc liball.a *.o
