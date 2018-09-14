/*
** print_char.c for print_char in /home/pipolm.pk/printf
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Tue Nov 15 17:53:05 2016 Philippe KAM
** Last update Sat Nov 19 19:21:26 2016 Philippe KAM
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
