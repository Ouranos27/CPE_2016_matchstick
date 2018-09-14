/*
** my_put_nbr.c for my_put_nbr.c in /home/pipolm.pk/CPool_Day03
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Fri Oct  7 17:33:02 2016 Philippe KAM
** Last update Sun Nov 20 16:09:46 2016 Philippe KAM
*/

#include "include/my_printf.h"

int	my_put_nbr(int nb)
{
  int	module;

  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
      if (nb == -2147483648)
	{
	  nb =nb / 10;
	  nb = nb * -1;
	}
    }
  if (nb >= 0)
    {
      if (nb >= 10)
	{
	  module = nb % 10;
	  nb = nb / 10;
	  my_put_nbr(nb);
	  my_putchar(48 + module);
	}
      else
	my_putchar(48 + nb % 10);
    }
  return (0);
}
