/*
** trans_braille.c for trans_braille in /home/lefebv_5/colle-2_L4KT1
** 
** Made by Pierre Lefebvre
** Login   <lefebv_5@epitech.net>
** 
** Started on  Wed May  6 19:37:30 2015 Pierre Lefebvre
** Last update Wed May  6 21:44:55 2015 Hubert Wroblewski
*/

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "braille.h"

static char	**read_txt(char *buff, int fd, char **trans_braille)
{
  int		big;
  int		lon;
  int		check_read;

  big = 0;
  lon = 0;
  while ((check_read = read(fd, buff, 1)) != 0)
    {
      if (check_read == -1)
	return (NULL);
      if (big == 4096)
	if ((trans_braille[lon] = my_realloc(trans_braille[lon])) == NULL)
	  return (NULL);
      if (buff[0] == '\n')
	{
	  lon = lon + 1;
	  if ((trans_braille[lon] = malloc(sizeof(char) * 4096)) == NULL)
	    return (NULL);
	  big = 0;
	}
      trans_braille[lon][big] = buff[0];
      big = big + 1;
    }
  trans_braille[lon] = NULL;
  return (trans_braille);
}

static char	**braille_tab(char **trans_braille, char **av)
{
  char		buff[1];
  int		fd;

  if ((fd = open(av[2], S_IRUSR)) == -1)
    return (NULL);
  if ((trans_braille = malloc(sizeof(char *) * 128)) == NULL)
    return (NULL);
  if ((trans_braille[0] = malloc(sizeof(char) * 4096)) == NULL)
    return (NULL);
  if ((trans_braille = read_txt(buff, fd, trans_braille)) == NULL)
    return (NULL);
}

int	print_braille(char **trans_braille, char *str)
{  
  int	i;
  int	nb;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] != ' ')
	{
	  check_maj(str, i);
	  if ((nb = find_letter(trans_braille, str[i])) == -1)
	    my_putstr("123456");
	  else
	    {
	      if (print_letter(trans_braille[nb]) == -1)
		return (-1);
	    }
	  if (str[i + 1] != '\0' && str[i + 1] != ' ')
	    my_putchar('-');
	}
      else
	my_putchar(' ');
      i++;
    }
  return (0);
}

int	main(int ac, char **av)
{
  char	**trans_braille;

  if (ac != 3)
    {
      my_putstr("Error : Invalid number of arguments\n");
      return (-1);
    }
  if (braille_tab(trans_braille, av) == NULL)
    {
      my_putstr("Error: 'braille_tab' failed\n");
      return (-1);
    }
  if (print_braille(trans_braille, av[1]) == -1)
    {
      my_putstr("Error : 'print_braille' failed.\n");
      return (-1);
    }
  return (0);
}
