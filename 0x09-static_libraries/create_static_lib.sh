#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -Wall -pedantic -Werror -Wextra -c *.c

# Create the static library from the object files
ar rcs liball.a *.o

# Clean up the object files
rm *.o

