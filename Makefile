#Votre Makefile ne doit pas relink. 
# That means that the Makefile should not rebuild all of the targets every time it is run.

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra  -Werror

# From 4.4.3 The Function wildcard gnu make manual....
# Althought wildcard expamds automaticaly in rules
# I use the wildcard function to expand wildcards in variables. 

SRCS = $(wildcard *.c)

# Generate a list of object files by replacing .c with .o

OBJS = $(patsubst %.c, %.o, $(SRCS))


# Vous devez utiliser la commande ar pour créer votre bibliothèque
# NOTE rcs:
# - r  means that if the library already exists, replace the old files within the library with your new files. 
# - c means create the library if it did not exist. 
# - s can be seen to mean 'sort' (create a sorted index of) the library, so that it will be indexed and faster to access the functions in the library.
#   Therefore, rcs can be seen to mean replace, create, sort

$(NAME): $(OBJS)
	ar rcs $(NAME) $?

# For each c file create its object file.
# This was my first option ....
#
# %.o: %.c
#	$(CC) $(CFLAGS) -c $< 
#
# but after reading Norm V4 point III.11 Makefile.....
# All source files you need to compile your project must be explicitly named in your Makefile.
# ... I elaborated this second option.
 

ft_atoi.o: ft_atoi.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_bzero.o: ft_bzero.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_calloc.o: ft_calloc.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_isalnum.o: ft_isalnum.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_isalpha.o: ft_isalpha.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_isascii.o: ft_isascii.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_isdigit.o: ft_isdigit.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_isprint.o: ft_isprint.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_itoa.o: ft_itoa.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_lstadd_back.o: ft_lstadd_back.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_lstadd_front.o: ft_lstadd_front.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_lstclear.o: ft_lstclear.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_lstdelone.o: ft_lstdelone.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_lstiter.o: ft_lstiter.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_lstlast.o: ft_lstlast.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_lstmap.o: ft_lstmap.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_lstnew.o: ft_lstnew.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_lstsize.o: ft_lstsize.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_memchr.o: ft_memchr.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_memcmp.o: ft_memcmp.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_memcpy.o: ft_memcpy.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_memmove.o: ft_memmove.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_memset.o: ft_memset.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_putchar_fd.o: ft_putchar_fd.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_putendl_fd.o: ft_putendl_fd.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_putnbr_fd.o: ft_putnbr_fd.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_split.o: ft_split.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_strchr.o: ft_strchr.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_strdup.o: ft_strdup.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_striteri.o: ft_striteri.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_strjoin.o: ft_strjoin.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_strlcat.o: ft_strlcat.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_strlcpy.o: ft_strlcpy.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_strlen.o: ft_strlen.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_strmapi.o: ft_strmapi.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_strncmp.o: ft_strncmp.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_strnstr.o: ft_strnstr.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_strrchr.o: ft_strrchr.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_strtrim.o: ft_strtrim.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_substr.o: ft_substr.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_tolower.o: ft_tolower.c
	$(CC) $(CFLAGS) -c $< -o $@
ft_toupper.o: ft_toupper.c
	$(CC) $(CFLAGS) -c $< -o $@
# removes all generated object files
clean:
	rm -f *.o

# removes target file and all generated object files
fclean: clean
	rm -f $(NAME)

# rebuild all after removing all
re: fclean all


all: $(NAME)


# Pour rendre des bonus, vous devez inclure une règle bonus à votre Makefile qui 
# ajoutera les divers headers, librairies ou fonctions qui ne sont pas autorisées 
# dans la partie principale du projet. 
# Les bonus doivent être dans un fichier différent : _bonus.{c/h}.
bonus:


norma: $(SRCS)
	norminette $(SRCS)
