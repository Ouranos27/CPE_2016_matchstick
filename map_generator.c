/*
** map_generator.c for matchstick in /home/ouranos27/my_desktop/CPE/CPE_2016_matchstick
** 
** Made by philippe kam
** Login   <philippe.kam@epitech.eu>
** 
** Started on  Tue Feb 14 15:05:18 2017 philippe kam
** Last update Thu Feb 23 16:35:53 2017 philippe kam
*/

#include "matchstick.h"

#include <stdlib.h>

t_var	var_init(int nb_line)
{
  t_var var;

  var.i = 1;
  var.k = nb_line;
  var.l = 1;
  return (var);
}

int	nb_star_1(int nb_line)
{
  int	nb;
  int	i;

  nb = 1;
  i = 0;
  while (i < nb_line)
    {
      nb = nb + 2;
      i++;
    }
  return (nb);
}

char	**stars_fill(char **map, int nb_line)
{
  t_var	var;

  var.i = 1;
  var.k = nb_star_1(nb_line);
  while (map[var.i])
    {
      map[var.i][var.k - 1] = '*';
      var.i++;
    }
  return (map);
}

void	show_map(char **map)
{
  int	i;

  i = 0;
  while (map[i])
    {
      my_printf("%s\n", map[i]);
      i++;
    }
}

char	**generator(int nb_line)
{
  char	**map;

  map = map_malloc(nb_line);
  map = spaces_n_pipes(map, nb_line);
  map = rev_spaces(map, nb_line);
  show_map(map);
  return (map);
}
