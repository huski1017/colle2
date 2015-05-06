/*
** trans_braille.c for trans_braille in /home/lefebv_5/colle-2_L4KT1
** 
** Made by Pierre Lefebvre
** Login   <lefebv_5@epitech.net>
** 
** Started on  Wed May  6 19:37:30 2015 Pierre Lefebvre
** Last update Wed May  6 20:53:49 2015 Pierre Lefebvre
*/

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "braille.h"

char	**braille_tab(char **trans_braille, char **av)
{
  char	buff[1];
  int	fd;
  int	larg;
  int	lon;

  larg = 0;
  lon = 0;
  if ((fd = open(av[2], S_IRUSR)) == -1)
    return (NULL);
  if ((trans_braille = malloc(sizeof(char *) * 128)) == NULL)
    return (NULL);
  if ((trans_braille[lon] = malloc(sizeof(char) * 4096)) == NULL)
    return (NULL);
  while (read(fd, buff, 1) != 0)
    {
      if (buff[0] == '\n')
	{
	  lon = lon + 1;
	  if ((trans_braille[lon] = malloc(sizeof(char) * 4096)) == NULL)
	    return (NULL);
	  larg = 0;
	}
      if (buff[0] == '\0')
	return (trans_braille);
      trans_braille[lon][larg] = buff[0];
      larg = larg + 1;
    }
  trans_braille[lon] = NULL;
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
  return (0);
}
