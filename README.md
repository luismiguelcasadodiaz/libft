# libft

This project is about coding a C library.
It will contain a lot of general-purpose functions your programs will rely upon.
It is a static library,  with the prefix `lib` and suffix `.a` named `libft.a`. In the file libft.h will contain the prototypes of all functions included in my library.

I use this [simple tutorial](https://makori-mildred.medium.com/how-to-create-static-library-in-c-and-how-to-use-it-b8b3e1fde999) to create the `Makefile`
Thanks to [Carles](https://github.com/krlspj) I created the bash script [touch.sh](https://github.com/luismiguelcasadodiaz/libft/blob/main/touch.sh ) that automaticlly create the 42 files `.c` that compose `libfft.a` . Each file is created with the 42 header.

## Libc functions
|num| Function |Status|
|---|:---------:|--------|
|01| [ft_isalpha](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_isalpha.c)| 23 09 13|
|02| [ft_isdigit](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_isdigit.c)| 23 09 14|
|03| [ft_isalnum](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_isalnum.c)| 23 09 14|
|04| [ft_isascii](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_isascii.c)| 23 09 14|
|05| [ft_isprint](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_isprint.c)| 23 09 14|
|06| [ft_strlen](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_strlen.c)| 23 09 15|
|07| [ft_memset](https://github.com/luismiguelcasadodiaz/libft/blob/main/ft_menset.c)| 23 09 18|
|08| [ft_bzero]()| KO |
|09| [ft_memcpy]()| KO |
|10| [ft_memmove]()| KO |
|11| [ft_strlcpy]()| KO |
|12| [ft_strlcat]()| KO |
|13| [ft_toupper]()| KO |
|14| [ft_tolower]()| KO |
|15| [ft_strchr]()| KO |
|16| [ft_strrchr]()| KO |
|17| [ft_strncmp]()| KO |
|18| [ft_memchr]()| KO |
|19| [ft_memcmp]()| KO |
|20| [ft_strnstr]()| KO |
|21| [ft_atoi]()| KO |
|22| [ft_calloc]()| KO |
|23| [ft_strdup]()| KO |

## Additional functions
|num| Function |Status|
|---|:---------:|--------|
|24| [ft_substr]()| KO |
|25| [ft_strjoin]()| KO |
|26| [ft_strtrim]()| KO |
|27| [ft_split]()| KO |
|28| [ft_itoa]()| KO |
|29| [ft_strmapi]()| KO |
|30| [ft_striteri]()| KO |
|31| [ft_putchar_fd]()| KO |
|32| [ft_putendl_fd]()| KO |
|33| [ft_putnbr_fd]()| KO |

##   Bonus Part
|num| Function |Status|
|---|:---------:|--------|
|34| [ft_lstnew]()| KO |
|35| [ft_lstadd_front]()| KO |
|36| [ft_lstsize]()| KO |
|37| [ft_lstlast]()| KO |
|38| [ft_lstadd_back]()| KO |
|39| [ft_lstdelone]()| KO |
|40| [ft_lstclear]()| KO |
|41| [ft_lstiter]()| KO |
|42| [ft_lstmap]()| KO |
