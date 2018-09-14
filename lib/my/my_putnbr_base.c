/*
** my_putnbr_base.c for my_putnbr_base.c in /home/pipolm.pk/CPool_Day06
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Tue Oct 11 19:30:30 2016 Philippe KAM
** Last update Thu Feb 23 16:23:07 2017 philippe kam
*/

#include "include/my_printf.h"

int	my_putnbr_base(unsigned int nbr, char *base)
{
  unsigned int	len_base;

  len_base = my_strlen(base);
  if (nbr >= len_base)
    {
      my_putnbr_base((nbr / len_base), base);
      my_putchar(base[nbr % len_base]);
    }
  if (nbr < len_base && nbr > 0)
    my_putchar(base[nbr % len_base]);
  return (nbr);
}
