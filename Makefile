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

# for each c file create its object file.
%.o: %.c
	$(CC) $(CFLAGS) -c $< 

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
