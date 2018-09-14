/*
** my_printf.c for printf in /home/pipolm.pk/PSU_2016_my_printf
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Sat Nov 19 15:32:47 2016 Philippe KAM
** Last update Sun Nov 20 16:07:33 2016 Philippe KAM
*/

#include "include/my_printf.h"
#include <stdarg.h>
#include <stddef.h>

t_params	flags_tab[] =
  {
    {&flag_d, 'd'},
    {&flag_i, 'i'},
    {&flag_c, 'c'},
    {&flag_o, 'o'},
    {&flag_u, 'u'},
    {&flag_b, 'b'},
    {&flag_p, 'p'},
    {&flag_x, 'x'},
    {&flag_X, 'X'},
    {&flag_s, 's'},
    {&flag_modulo, '%'},
    {NULL}
  };

void	flags_checking(char check, va_list ap)
{
  int	i;

  i = 0;
  while (flags_tab[i].check != '\0')
    {
      if (flags_tab[i].check == check)
	{
	  flags_tab[i].flag_funct(ap);
	}
      i = i + 1;
    }
}

int	check_params(char *str, int i)
{

  if (str[i + 1] == 'x')
    {
      i = i + 1;
      my_putstr("0x");
    }
  if (str[i + 1] == 'X')
    {
      i = i + 1;
      my_putstr("0X");
    }
  if (str[i + 1] == 'o')
    {
      i = i + 1;
      my_putstr("0");
    }
  return (i);
}

int	my_printf(char *str, ...)
{
  va_list       ap;
  int   i;

  i = 0;
  va_start(ap, str);
  while (str[i] != '\0')
    {
      if (str[i] == '%')
	{
	  i = i + 1;
	  if (str[i] == '#')
	    {
	      check_params(str, i);
	      i = i + 1;
	    }
	  flags_checking(str[i], ap);
	}
      else
	my_putchar(str[i]);
      i = i + 1;
    }
  va_end(ap);
  return (0);
}
