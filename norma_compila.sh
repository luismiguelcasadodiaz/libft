#!/bin/sh
# This tiny detail strips from the argument the file extension,  keeping in name only the file name.
# I reuse the filename to find the test files for each function i want to test the file name 
name=${1%.c}
norminette -R CheckForbiddenSourceHeader $1
cc -Wall -Wextra -Werror -o test_$name test_$name.c $1
./test_$name
