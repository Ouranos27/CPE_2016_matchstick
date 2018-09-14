_next_line.c for getnextline in /home/ouranos27/my_desktop/CPE/CPE_2016_getnextline
** 
** Made by philippe kam
** Login   <philippe.kam@epitech.eu>
** 
** Started on  Thu Jan  5 11:23:13 2017 philippe kam
** Last update Sun Feb 26 14:04:16 2017 philippe kam
*/

#include "get_next_line.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

char	*my_strcpy(char * temp, char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] != '\0')
    {
      temp[i] = s1[i];
      i++;
    }
  if (s2[0] != '\n')
    temp[i] = s2[0];
  temp[i + 1] = '\0';
  return (temp);
}

char	*my_realloc(char *s1, char *s2)
{
  char	*temp;

  if ((temp = malloc(sizeof(char) * my_strlen(s1) + my_strlen(s2))) == NULL)
    return (NULL);
  my_strcpy(temp, s1, s2);
  free(s1);
  return (temp);
}

int	eof(char *read_buffer)
{
  if (read_buffer[0] != '\n')
    return (-1);
  return (0);
}

char		*get_next_line(const int fd)
{
  static char	*read_buffer;
  char       	*buffer;
  int		rep;
  int		i;

  if ((read_buffer = malloc(sizeof(char) * (READ_SIZE + 1))) == NULL)
    return (NULL);
  if ((buffer = malloc(sizeof(char) * (READ_SIZE + 1))) == NULL)
    return (NULL);
  buffer[0] = '\0';
  while ((rep = read(fd, read_buffer, READ_SIZE)) != 0
	 && (i = eof(read_buffer)) == -1)
    buffer = my_realloc(buffer, read_buffer);
  if (rep == 0)
    return (NULL);
  return (buffer);
}

int	main()
{
  char *s;
  while ((s = get_next_line(0)))
    {
      printf("%s\n", s);
      free(s);
    }
  return (0);
}
