/*
** matchstick.h for matchstick in /home/ouranos27/my_desktop/CPE/CPE_2016_matchstick
** 
** Made by philippe kam
** Login   <philippe.kam@epitech.eu>
** 
** Started on  Fri Feb 17 16:54:32 2017 philippe kam
** Last update Sun Feb 26 16:01:05 2017 philippe kam
*/

#ifndef MATCHSTICK_H_
# define MATCHSTICK_H_

typedef struct  s_var
{
  int           i;
  int           j;
  int           k;
  int           l;
  int           m;
}               t_var;

int		my_printf(char *str, ...);
char		**modif_map(char **map, int line, int matches);
int		get_line(char **map);
int		get_matches(char **map, int lim, int line);
int		process(char **map, int lim);
int		verif_limit(int limit, int matches);
int		verif_int(char *str);
t_var		var_init(int nb_line);
int		nb_star_1(int nb_line);
char		**map_malloc(int nb_line);
char		**spaces_n_pipes(char **map, int nb_line);
char		**rev_spaces(char **map, int nb_line);
char		**stars_fill(char **map, int nb_line);
void		show_map(char **map);
char		**generator(int nb_line);
int		my_getnbr(char *str);
char            *get_next_line(const int fd);
int		check_win(char **map);
int		nb_pipes_on_line(char **map, int line);
int		nb_lines(char **map, int line);
int		verif_line(char **map, int line);
int		verif_matches(char **map, int lim, int line, int matches);
int		rand_line(char **map);
int		rand_matches(char **map, int lim, int line);
int		wheatley(char **map, int lim);

#endif /* !MATCHSTICK */
