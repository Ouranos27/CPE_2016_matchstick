/*
** print_str.c for print_str in /home/pipolm.pk/printf
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Tue Nov 15 17:52:19 2016 Philippe KAM
** Last update Sun Nov 20 16:10:09 2016 Philippe KAM
*/

#include "include/my_printf.h"

void	my_putstr(char *str)
{
  unsigned int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
