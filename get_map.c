/*
** get_map.c for matchstick in /home/ouranos27/my_desktop/CPE/CPE_2016_matchstick
** 
** Made by philippe kam
** Login   <philippe.kam@epitech.eu>
** 
** Started on  Thu Feb 23 16:10:55 2017 philippe kam
** Last update Thu Feb 23 16:27:48 2017 philippe kam
*/

#include <stdlib.h>

#include "matchstick.h"

char	**modif_map(char **map, int line, int matches)
{
  int   i;
  int   j;

  i = 0;
  j = -1;
  while (map[line][i] && j == -1)
    {
      i++;
      if (map[line][i] == '|' && map[line][i + 1] == ' ')
	j = 1;
    }
  while (j <= matches)
    {
      if (map[line][i] == '|')
	map[line][i] = ' ';
      i--;
      j++;
    }
  show_map(map);
  return (map);
}

int	get_line(char **map)
{
  char  *s;
  int   line;

  s = NULL;
  line = 0;
  my_printf("Line: ");
  while ((s = get_next_line(0)))
    {
      if (verif_int(s) == -1)
	{
	  my_printf("Error: invalid input (positive number expected\n");
	  return (get_line(map));
	}
      line = my_getnbr(s);
      if (verif_line(map, line) == -1)
	return (get_line(map));
      else
	return (line);
    }
  my_printf("\n");
  return (0);
}

int	get_matches(char **map, int lim, int line)
{
  char  *s;
  int   matches;

  s = NULL;
  matches = 0;
  my_printf("Matches: ");
  while ((s = get_next_line(0)))
    {
      if (verif_int(s) == -1)
	{
	  my_printf("Error: invalid input (positive number expected)\n");
	  return (get_matches(map, lim, line));
	}
      matches = my_getnbr(s);
      if (verif_matches(map, lim, line, matches) == -1)
	return (-1);
      else
	return (matches);
    }
  my_printf("\n");
  return (matches);
}
