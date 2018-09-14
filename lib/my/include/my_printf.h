/*
** my_printf.h for my_printf.h in /home/pipolm.pk/printf
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Wed Nov 16 16:38:10 2016 Philippe KAM
** Last update Thu Feb 23 16:26:36 2017 philippe kam
*/

#ifndef MY_PRINTF_H_
#define MY_PRINTF_H_

#include <stdarg.h>

typedef struct	s_params
{
  
  void	(*flag_funct)(va_list);
  char	check;
}		t_params;

void	flag_c(va_list ap);
void	flag_d(va_list ap);
void	flag_i(va_list ap);
void	flag_s(va_list ap);
void	flag_o(va_list ap);
void	flag_u(va_list ap);
void	flag_b(va_list ap);
void	flag_s(va_list ap);
void	flag_S(va_list ap);
void	flag_p(va_list ap);
void	flag_x(va_list ap);
void	flag_X(va_list ap);
void	flag_S(va_list ap);
void	flag_modulo();
void	flags_checking(char check, va_list ap);
int	check_params(char *str, int i);
int	my_printf(char *str, ...);
void	my_putchar(char c);
int	my_strlen(char *str);
void	my_putstr(char *str);
int	my_put_nbr(int nb);
int	my_putnbr_base(unsigned int nbr, char *base);
int	my_putstr_s(char *str);



#endif /* MY_PRINTF_H_ */
