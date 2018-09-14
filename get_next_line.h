/*
** get_next_line.h for get_next_line in /home/ouranos27/my_desktop/CPE/CPE_2016_matchstick
** 
** Made by philippe kam
** Login   <philippe.kam@epitech.eu>
** 
** Started on  Wed Feb 15 14:38:35 2017 philippe kam
** Last update Wed Feb 15 14:44:21 2017 philippe kam
*/

#include <stdlib.h>
#include <unistd.h>

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE

# ifndef READ_SIZE
#  define READ_SIZE 1
# endif /* !READ_SIZE */

char	*get_next_line(const int fd);

#endif /* !GET_NEXT_LINE */
