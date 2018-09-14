/*
** flags.c for flags in /home/pipolm.pk/printf
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Thu Nov 17 18:50:45 2016 Philippe KAM
** Last update Thu Feb 23 16:23:36 2017 philippe kam
*/
#include <stdarg.h>
#include "include/my_printf.h"

void	flag_c(va_list ap)
{
  my_putchar(va_arg(ap, int));
}

void	flag_d(va_list ap)
{
  my_put_nbr(va_arg(ap, int));
}

void	flag_i(va_list ap)
{
  my_put_nbr(va_arg(ap, int));
}

void	flag_s(va_list ap)
{
  my_putstr(va_arg(ap, char *));
}

void	flag_o(va_list ap)
{
  my_putnbr_base(va_arg(ap, unsigned int), "01234567");
}
