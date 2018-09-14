/*
** print_str_S.c for put_str_S in /home/pipolm.pk/printf
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Wed Nov 16 17:04:00 2016 Philippe KAM
** Last update Thu Feb 23 16:25:04 2017 philippe kam
*/

#include "include/my_printf.h"

int	my_putstr_s(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= ' ' && str[i] <= '~')
	my_putchar(str[i]);
      else
	{
	  my_putchar(92);
	  if (str[i] <= '\b')
	    my_putstr("00");
	  else if (str[i] >= '\t' && str[i] <= ' ')
	    my_putstr("0");
	  my_putnbr_base(str[i], "01234567");
	}
      i = i + 1;
    }
  return (0);
}
