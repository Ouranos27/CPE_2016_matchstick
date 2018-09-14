/*
** flags_3.c for flags in /home/pipolm.pk/PSU_2016_my_printf
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Sun Nov 20 15:06:31 2016 Philippe KAM
** Last update Sun Nov 20 16:06:44 2016 Philippe KAM
*/

#include "include/my_printf.h"

void	flag_modulo()
{
  my_putstr("%");
}

void	flag_u(va_list ap)
{
  my_put_nbr(va_arg(ap, unsigned int));
}
