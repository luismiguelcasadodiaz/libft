# libft

This project is about coding a C library.
It will contain a lot of general-purpose functions your programs will rely upon.
It is a static library,  with the prefix `lib` and suffix `.a` named `libft.a`. In the file libft.h will contain the prototypes of all functions included in my library.

I use this [simple tutorial](https://makori-mildred.medium.com/how-to-create-static-library-in-c-and-how-to-use-it-b8b3e1fde999) to create the `Makefile`
Thanks to [Carles](https://github.com/krlspj) I created the bash script [touch.sh](https://github.com/luismiguelcasadodiaz/libft/blob/main/tests/touch.sh) that automaticlly create the 42 files `.c` that compose `libfft.a` . Each file is created with the 42 header.

## Libc functions
|num| Function |Status|
|---|:----------|--------|
|01| [ft_isalpha](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_isalpha.c)| 23 09 13|
|02| [ft_isdigit](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_isdigit.c)| 23 09 14|
|03| [ft_isalnum](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_isalnum.c)| 23 09 14|
|04| [ft_isascii](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_isascii.c)| 23 09 14|
|05| [ft_isprint](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_isprint.c)| 23 09 14|
|06| [ft_strlen](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_strlen.c)| 23 09 15|
|07| [ft_memset](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_memset.c)| 23 09 18|
|08| [ft_bzero](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_bzero.c)| 23 09 19|
|09| [ft_memcpy](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_memcpy.c)| 23 09 19|
|10| [ft_memmove](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_memmove.c)| 23 09 19|
|11| [ft_strlcpy](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_strlcpy.c)| 23 39 25|
|12| [ft_strlcat](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_strlcat.c)| 23 09 25|
|13| [ft_toupper](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_toupper.c)| 23 09 22|
|14| [ft_tolower](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_tolower.c)| 23 09 22|
|15| [ft_strchr](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_strchr.c)| 23 09 22|
|16| [ft_strrchr](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_strrchr.c)| 23 09 22|
|17| [ft_strncmp](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_strncmp.c)| 23 09 23|
|18| [ft_memchr](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_memchr.c)| 23 09 20|
|19| [ft_memcmp](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_memcmp.c)| 23 09 20|
|20| [ft_strnstr](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_strnstr.c)| 23 09 25|
|21| [ft_atoi](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_atoi.c)| 23 09 23|
|22| [ft_calloc](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_calloc.c)| 23 09 24|
|23| [ft_strdup](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_strdup.c)| 23 09 24|

## Additional functions
|num| Function |Status|
|---|:----------|--------|
|24| [ft_substr](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_substr.c)| 23 09 25|
|25| [ft_strjoin](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_strjoin.c)| 23 09 29|
|26| [ft_strtrim](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_strtrim.c)| 23 10 02|
|27| [ft_split](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_split.c)| 23 10 12|
|28| [ft_itoa](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_itoa.c)| 23 10 09|
|29| [ft_strmapi](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_strmapi.c)| 23 10 09|
|30| [ft_striteri](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_striteri.c)| 23 10 09|
|31| [ft_putchar_fd](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_putchar_fd.c)| 23 10 09|
|32| [ft_putstr_fd](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_putstr_fd.c)| 23 10 09|
|33| [ft_putendl_fd](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_putendl_fd.c)| 23 10 09|
|34| [ft_putnbr_fd](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_putnbr_fd.c)| 23 10 09|

##   Bonus Part
|num| Function |Status|
|---|:---------|--------|
|35| [ft_lstnew](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_lstnew.c)| 23 10 10|
|36| [ft_lstadd_front](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_lstadd_front.c)| 23 10 10|
|37| [ft_lstsize](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_lstsize.c)| 23 10 11|
|38| [ft_lstlast](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_lstlast.c)| 23 10 11|
|39| [ft_lstadd_back](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_lstadd_back.c)| 23 10 11|
|40| [ft_lstdelone](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_lstdelone.c)| 23 10 12|
|41| [ft_lstclear](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_lstclear.c)| 23 10 12|
|42| [ft_lstiter](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_lstiter.c)| 23 10 12|
|43| [ft_lstmap](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_lstmap.c)| 23 10 12|

### Malloc summary
[ft_calloc.c](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_calloc.c)
[ft_itoa.c](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_itoa.c)
[ft_lstnew.c](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_lstnew.c)
[ft_split.c](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_split.c)
[ft_strdup.c](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_strdup.c)
[ft_strjoin.c](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_strjoin.c)
[ft_strmapi.c](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_strmapi.c)
[ft_strtrim.c](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_strtrim.c)
[ft_substr.c](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_substr.c)
