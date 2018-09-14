/*
** flags_2.c for flags in /home/pipolm.pk/PSU_2016_my_printf
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Sat Nov 19 16:36:50 2016 Philippe KAM
** Last update Thu Feb 23 16:26:23 2017 philippe kam
*/

#include <stdarg.h>
#include "include/my_printf.h"

void	flag_b(va_list ap)
{
  my_putnbr_base(va_arg(ap,unsigned long int), "01");
}

void	flag_p(va_list ap)
{
  my_putstr("0x");
  my_putnbr_base(va_arg(ap, unsigned long int), "0123456789abcdef");
}

void	flag_x(va_list ap)
{
  my_putnbr_base(va_arg(ap, unsigned int), "0123456789abcdef");
}

void	flag_X(va_list ap)
{
  my_putnbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF");
}

void	flag_S(va_list ap)
{
  my_putstr_s(va_arg(ap, char *));
}
