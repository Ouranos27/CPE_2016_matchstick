##
## Makefile for matchestick in /home/ouranos27/my_desktop/CPE/CPE_2016_matchstick
## 
## Made by philippe kam
## Login   <philippe.kam@epitech.eu>
## 
## Started on  Fri Feb 17 15:59:42 2017 philippe kam
## Last update Thu Feb 23 16:37:23 2017 philippe kam
##

CFLAGS  +=      -Wall -Wextra

SRC     =       main.c			\
		map_generator.c		\
		get_next_line.c		\
		my_getnbr.c		\
		wheatley.c		\
		get_map.c		\
		map_filling.c		\
		verifs.c

OBJ     =       $(SRC:.c=.o)

NAME    =       matchstick

MAKE_RE =       cd ./lib/my && make re

all:            $(NAME)

$(NAME):        $(OBJ)
		$(MAKE_RE)
		gcc -g $(SRC) -L./lib/my -lmy -o $(NAME) $(CFLAGS)

clean:
		cd ./lib/my && make clean
		rm -f $(OBJ)

fclean:		clean
		cd ./lib/my && make clean
		rm -f $(NAME)

re:             fclean all

.PHONY:         re fclean all
