/*
** verifs.c for matchstick in /home/ouranos27/my_desktop/CPE/CPE_2016_matchstick
** 
** Made by philippe kam
** Login   <philippe.kam@epitech.eu>
** 
** Started on  Fri Feb 17 18:39:03 2017 philippe kam
** Last update Thu Feb 23 16:43:11 2017 philippe kam
*/

#include "matchstick.h"

int	check_win(char **map)
{
  t_var	var;

  var.i = 1;
  while (map[var.i])
    {
      var.j = 1;
      while (map[var.i][var.j])
	{
	  if (map[var.i][var.j] == '|')
	    return (0);
	  var.j++;
	}
      var.i++;
    }
  return (-1);
}

int	nb_pipes_on_line(char **map, int line)
{
  t_var var;

  var.i = 1;
  var.j = 0;
  while (map[line][var.i])
    {
      if (map[line][var.i] == '|')
	var.j++;
      var.i++;
    }
  return (var.j);
}

int	nb_lines(char **map, int line)
{
  int	i;

  i = 0;
  while (map[i])
    i++;
  i = i - 2;
  if (line > i)
    return (-1);
  return (0);
}

int	verif_line(char **map, int line)
{
  if (line == 0 || nb_lines(map, line) == -1)
    {
      my_printf("Error: this line is out of range\n");
      return (-1);
    }
  return (0);
}

int	verif_matches(char **map, int lim, int line, int matches)
{
  if (matches == 0)
    {
      my_printf("Error: you have to remove at least one match\n");
      return (-1);
    }
  if (nb_pipes_on_line(map, line) < matches)
    {
      my_printf("Error: not enough matches on this line\n");
      return (-1);
    }
  if (verif_limit(lim, matches) == -1)
    {
      my_printf("Error: you cannot remove more than ");
      my_printf("%d matches per turn\n", lim);
      return (-1);
    }
  return (0);
}
