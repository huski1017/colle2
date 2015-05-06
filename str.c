/*
** str.c for str in /home/lefebv_5/colle-2_L4KT1
** 
** Made by Pierre Lefebvre
** Login   <lefebv_5@epitech.net>
** 
** Started on  Wed May  6 18:59:43 2015 Pierre Lefebvre
** Last update Wed May  6 19:03:15 2015 Pierre Lefebvre
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_strlen(char str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i = i + 1;
  return (i);
}

void		my_putnbr(int nb)
{
  int		x;
  unsigned int	p;

  x = 1;
  if (nb < 0)
    {
      p = nb * -1;
      my_putchar('-');
    }
  else
    p = nb;
  while (p / x > 9)
    x = x * 10;
  while (x > 0)
    {
      my_putchar((p / x) % 10 + 48);
      x = x / 10;
    }
}
