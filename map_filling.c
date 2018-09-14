/*
** map_filling.c for matchstick in /home/ouranos27/my_desktop/CPE/CPE_2016_matchstick
** 
** Made by philippe kam
** Login   <philippe.kam@epitech.eu>
** 
** Started on  Thu Feb 23 16:34:21 2017 philippe kam
** Last update Thu Feb 23 16:38:41 2017 philippe kam
*/

#include <stdlib.h>
#include "matchstick.h"

char	**map_malloc(int nb_line)
{
  int   i;
  int   j;
  int   nb_star;
  char  **map;

  i = 0;
  nb_star = nb_star_1(nb_line);
  if ((map = malloc(sizeof(char *) * (nb_line + 2) + 1)) == NULL)
    return (NULL);
  while (i < nb_line + 2)
    {
      j = 0;
      if ((map[i] = malloc(sizeof(char) * nb_star + 1)) == NULL)
	return (NULL);
      while (j < nb_star)
	{
	  map[i][j] = '*';
	  j++;
	}
      map[i][j] = '\0';
      i++;
    }
  map[i] = NULL;
  return (map);
}

char	**spaces_n_pipes(char **map, int nb_line)
{
  t_var var;

  var = var_init(nb_line);
  while (map[var.i])
    {
      var.m = 1;
      var.j = 1;
      while (var.j < var.k)
	{
	  map[var.i][var.j] = ' ';
	  var.j++;
	}
      var.k = var.k - 1;
      while (var.m <= var.l)
	{
	  map[var.i][var.j] = '|';
	  var.j++;
	  var.m++;
	}
      var.l = var.l + 2;
      var.i++;
      if (map[var.i + 1] == NULL)
	var.i++;
    }
  return (map);
}

char	**rev_spaces(char **map, int nb_line)
{
  t_var var;

  var.i = 1;
  var.j = nb_line;
  var.k = nb_star_1(nb_line);
  while (map[var.i])
    {
      var.l = var.j + 1;
      while (var.l < var.k - 1)
	{
	  map[var.i][var.l] = ' ';
	  var.l++;
	}
      var.j++;
      var.i++;
      if (map[var.i + 1] == NULL)
	var.i++;
    }
  return (map);
}
