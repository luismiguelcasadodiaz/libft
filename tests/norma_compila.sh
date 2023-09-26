#!/bin/sh
# This tiny detail strips from the argument the file extension,  keeping in name only the file name.
# I reuse the filename to find the test files for each function i want to test the file name 
name=${1%.c}
norminette -R CheckForbiddenSourceHeader ../$1
cc -g -Wall -Wextra -Werror  -c ../$1 ../libft.h
cc -g -Wall -Wextra -Werror  -c test_$name.c ../libft.h
#UBUNTU cc -g -Wall -Wextra -Werror  -o test_$name test_$name.o $name.o  -L.. -l:libft.a
cc -g -Wall -Wextra -Werror  -o test_$name test_$name.o $name.o  -L.. -lft
./test_$name
