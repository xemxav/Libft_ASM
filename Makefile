.PHONY: all clean fclean re

NASM = nasm

CC = gcc
FLAGS = -Wall -Werror -Wextra

NAME = libfts.a
PATH_OBJ = ./obj/
PATH_INC = ./includes/

HEADER = $(PATH_INC)libfts.h

#******************************************************************************#
#                              LIB FILES                                       #
#******************************************************************************#

FILES = ft_isprint \
		ft_isascii \
		ft_isdigit \
		ft_isalpha \
		ft_isalnum \
		ft_toupper \
		ft_tolower \
		ft_strlen \
		ft_puts\
		ft_memset \
		ft_bzero \
		ft_memcpy \
		ft_strdup \

OBJ = $(addprefix $(PATH_OBJ), $(addsuffix .o , $(FILES)))
SRC = $($(addsuffix .s , $(FILES)))


#******************************************************************************#
#                                    RULES                                     #
#******************************************************************************#

all: $(NAME)

test: $(NAME)
	@$(CC) $(FLAGS) test_des_fonctions.c libfts.a -o test.out
	@./test.out

$(NAME): $(PATH_OBJ) $(OBJ)
	ar rcs $(NAME) $(OBJ)
	@echo "$(NAME) has been created"

$(PATH_OBJ)%.o: %.s
	$(NASM) -f macho64 $< -o $@

$(PATH_OBJ):
	@mkdir -p $(PATH_OBJ)

clean:
	@printf "\n\033[1m SUPPRESSION DES OBJETS\033[0m\n"
	@rm -rf $(PATH_OBJ)

fclean: clean
	@printf "\n\033[1mSUPPRESSION DE $(NAME)\033[0m\n"
	@rm -rf $(NAME)
	@rm -rf $(PATH_OBJ)

re: fclean all
	@echo "$(NAME) is fresh new"