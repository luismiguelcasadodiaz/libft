#!/bin/sh
name=${1%.c}
norminette -R CheckForbiddenSourceHeader $1
cc -Wall -Wextra -Werror -o test_$name test_$name.c $1
./test_$name
