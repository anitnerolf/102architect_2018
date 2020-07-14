##
## EPITECH PROJECT, 2018
## 102architect_2018
## File description:
## Makefile
##

SRC	=	my_102_architect.c	\
		main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	102architect

CFLAGS	=	-lm -g -g3 -ggdb -I ./include

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
