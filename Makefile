#Votre Makefile ne doit pas relink. 
# That means that the Makefile should not rebuild all of the targets every time it is run.

NAME = libft.a
CC = cc
CFLAGS = -g -Wall -Wextra  -Werror

# From 4.4.3 The Function wildcard gnu make manual....
# Althought wildcard exparnds automaticaly in rules
# I use the wildcard function to expand wildcards in variables. 
# SRCS = $(wildcard *.c)
#
# This technique is forbidden according to 42 Norm point III.11
#
# So I must explicitly enumerate files for the project.

SRCS = ft_isalnum.c \
       ft_isalpha.c \
       ft_isascii.c \
       ft_isdigit.c \
       ft_isprint.c \
       ft_strlen.c \
       ft_memset.c \
       ft_bzero.c \
       ft_memcpy.c \
       ft_memmove.c \
       ft_memchr.c \
       ft_memcmp.c \
       ft_strlcpy.c \
       ft_strlcat.c \
       ft_strchr.c \
       ft_strrchr.c \
       ft_tolower.c \
       ft_toupper.c \
	   ft_atoi.c \
       ft_strtrim.c \
       ft_strncmp.c \
       ft_calloc.c \
       ft_strdup.c \
       ft_strnstr.c \
       ft_substr.c \
       ft_strjoin.c \
#      ft_itoa.c \
       ft_putchar_fd.c \
       ft_putendl_fd.c \
       ft_putnbr_fd.c \
       ft_split.c \
       ft_striteri.c \
       ft_strmapi.c \

#BONUS_SRCS = ft_lstadd_back.c \
             ft_lstadd_front.c \
             ft_lstclear.c \
             ft_lstdelone.c \
             ft_lstiter.c \
             ft_lstlast.c \
             ft_lstmap.c \
             ft_lstnew.c \
             ft_lstsize.c \

# Generate a list of object files by replacing .c with .o

OBJS = $(patsubst %.c, %.o, $(SRCS))
#BONUS_OBJS = $(patsubst %.c, %.o, $(BONUS_SRCS))

# The default goal is the first target of the first rule in the first makefile.
# This is the reason for writtting this rule the first one


all: $(NAME) 
# Vous devez utiliser la commande ar pour créer votre bibliothèque
# NOTE rcs:
# - r  means that if the library already exists, replace the old files within the library with your new files. 
# - c means create the library if it did not exist. 
# - s can be seen to mean 'sort' (create a sorted index of) the library, so that it will be indexed and faster to access the functions in the library.
#   Therefore, rcs can be seen to mean replace, create, sort

$(NAME): $(OBJS)
	@echo "================ GATHERING ALL OBJECTS ====================="
	ar rcs $(NAME) $?

# For each c file create its object file.
# This was my first option ....

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

# but after reading Norm V4 point III.11 Makefile.....
# All source files you need to compile your project must be explicitly named in your Makefile.
# ... I elaborated this second option.

# if any change un Makefile then rebuil
#Makefile:fclean

# removes all generated object files
.PHONY: clean
clean:
	@echo "================ REMOVING ALL OBJECTS ======================"
	rm -f *.o

# removes target file and all generated object files
.PHONY: fclean
fclean: clean
	@echo "================ REMOVING TARGET =========================="
	rm -f $(NAME)

# rebuild all after removing all
.PHONY: re
re: fclean all
	@echo "================ REBUILDING ==============================="
norma: $(SRCS)
	@echo "================ CHECKING NORME ==========================="
	norminette $(SRCS)



# Pour rendre des bonus, vous devez inclure une règle bonus à votre Makefile qui 
# ajoutera les divers headers, librairies ou fonctions qui ne sont pas autorisées 
# dans la partie principale du projet. 
# Les bonus doivent être dans un fichier différent : _bonus.{c/h}.
# There is a contradiciton between french version and english version
# Add structure s_list  declaration to your libft.h file:
#bonus: bonus_setup $(BONUS_OBJS) bonus_restore
#	ar rcs $(NAME) $(BONUS_OBJS)

#bonus_setup:
#	head -14 libft.h > tirame.h
#	echo "typedef struct s_list\n{\n\tvoid\t\t\t*content;\n\tstruct s_list\t*next;\n}\t\t\tt_list;\n" >> tirame.h
#	tail -6 libft.h >> tirame.h
#	mv libft.h libft.h.bck
#	mv tirame.h libft.h

#bonus_restore:
#	mv libft.h.bck libft.h

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

bonus_clean:
	rm -f ft_lst*.o

bonus_norma: $(BONUS_SRCS)
	norminette $(BONUS_SRCS)
