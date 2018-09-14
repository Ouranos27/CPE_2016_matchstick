##
## Makefile for Makefile in /home/pipolm.pk/PSU_2016_my_printf
## 
## Made by Philippe KAM
## Login   <pipolm.pk@epitech.net>
## 
## Started on  Sun Nov 20 13:34:55 2016 Philippe KAM
## Last update Sun Nov 20 16:14:55 2016 Philippe KAM
##

SRC	=	my_printf.c		\
		flags.c			\
		flags_2.c		\
		flags_3.c		\
		my_strlen.c		\
		my_put_nbr.c		\
		my_putnbr_base.c	\
		my_putchar.c		\
		my_putstr.c		\
		my_putstr_2.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
