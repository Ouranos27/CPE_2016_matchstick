/*
** my_strlen.c for my_strlen in /home/pipolm.pk/printf
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Fri Nov 18 11:36:19 2016 Philippe KAM
** Last update Sun Nov 20 16:12:03 2016 Philippe KAM
*/

#include "include/my_printf.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i = i + 1;
  return (i);
}
