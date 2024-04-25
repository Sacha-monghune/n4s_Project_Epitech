##
## EPITECH PROJECT, 2024
## n4s_package
## File description:
## Makefile
##

SRC = ai.c \
	  my_strtok.c \
	  speed.c \
	  turn.c \

OBJ =	$(SRC:.c=.o)

NAME = ai

all : $(NAME)

$(NAME) : $(OBJ)
			gcc $(SRC) -o $(NAME) -lm

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all
