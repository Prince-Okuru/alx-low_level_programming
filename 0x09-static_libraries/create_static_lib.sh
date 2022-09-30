#!/bin/bash
<<<<<<< HEAD
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
=======
gcc -c *.c
ar rc liball.a *.o
>>>>>>> aaa9ea8b6ca9e42b97ab2909736a0c188aad9f42
ranlib liball.a
