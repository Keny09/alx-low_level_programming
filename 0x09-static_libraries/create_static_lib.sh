#!bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liball.a*.0
runlib liball.a
