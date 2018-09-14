/*
** main.c for matchstick in /home/ouranos27/my_desktop/CPE/CPE_2016_matchstick
** 
** Made by philippe kam
** Login   <philippe.kam@epitech.eu>
** 
** Started on  Tue Feb 14 15:08:43 2017 philippe kam
** Last update Sun Feb 26 13:58:46 2017 philippe kam
*/

#include "matchstick.h"

int	process(char **map, int lim)
{
  int	line;
  int	matches;

  if ((line = get_line(map)) == 0)
    return (0);
  if ((matches = get_matches(map, lim, line)) == 0)
    return (0);
  else if (matches == -1)
    return (process(map, lim));
  my_printf("Player removed %d match(es) from line %d\n", matches, line);
  map = modif_map(map, line, matches);
  if (check_win(map) == -1)
    {
      my_printf("You lost, too bad...\n");
      return (2);
    }
  else if (check_win(map) == 0)
    {
      if (wheatley(map, lim) == -1)
	return (1);
    }
  return (2);
}

int	verif_limit(int limit, int matches)
{
  if (matches > limit)
    return (-1);
  return (0);
}

int	verif_int(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= 48 && str[i] <= 57)
	i++;
      else
	return (-1);
    }
  return (0);
}

int	main(int ac, char **av)
{
  int	lim;
  int	prog;
  char	**map;

  if (ac != 3)
    return (84);
  if (verif_int(av[1]) == -1 || verif_int(av[2]) == -1)
    return (84);
  lim = my_getnbr(av[2]);
  if (lim == 0)
    return (84);
  if (my_getnbr(av[1]) == 0)
    return (84);
  else if (my_getnbr(av[1]) > 100)
    return (84);
  else
    map = generator(my_getnbr(av[1]));
  my_printf("\nYour turn:\n");
  prog = process(map, lim);
  if (prog == 2)
    return (2);
  else if (prog == 0)
    return (0);
  else
    return (1);
  return (0);
}
