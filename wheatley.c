/*
** wheatley.c for matchstick in /home/ouranos27/my_desktop/CPE/CPE_2016_matchstick
** 
** Made by philippe kam
** Login   <philippe.kam@epitech.eu>
** 
** Started on  Mon Feb 20 10:58:16 2017 philippe kam
** Last update Sun Feb 26 14:09:57 2017 philippe kam
*/

#include "matchstick.h"

#include <stdlib.h>

int	rand_line(char **map)
{
  int	line;
  int	i;

  i = 0;
  while (map[i])
    i++;
  i = i - 2;
  line = (rand() % i) + 1;
  if (nb_pipes_on_line(map, line) == 0)
    return (rand_line(map));
  return (line);
}

int	rand_matches(char **map, int lim, int line)
{
  int	matches;

  matches = (rand() % nb_pipes_on_line(map, line)) + 1;
  if (matches > lim && matches > nb_pipes_on_line(map, line))
    return (rand_matches(map, lim, line));
  return (matches);
}

int	wheatley(char **map, int lim)
{
  int	line;
  int	matches;

  line = 0;
  matches = 0;
  line = rand_line(map);
  matches = rand_matches(map, lim, line);
  my_printf("\nAI's turn...\n");
  my_printf("AI removed %d match(es) from line %d\n", matches, line);
  modif_map(map, line, matches);
  if (check_win(map) == -1)
    {
      my_printf("I lost... snif... but I'll get you next time!!\n");
      return (-1);
    }
  else if (check_win(map) == 0)
    {
      my_printf("\nYour turn:\n");
      process(map, lim);
    }
  return (0);
}
