/*
** my_realloc.c for colle in /home/wroble_h/rendu/colle-2_L4KT1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Wed May  6 19:53:35 2015 Hubert Wroblewski
** Last update Wed May  6 20:43:50 2015 Pierre Lefebvre
*/

#include <stdlib.h>
#include "braille.h"

static char	*my_strcpy(char *src, char *dest)
{
  int		i;

  i = 0;
  if (src)
    {
      while (src[i] != '\0')
	{
	  dest[i] = src[i];
	  i++;
	}
      return (dest);
    }
  my_putstr("Error : 'my_strcpy' failed.\n");
  return (NULL);
}

char		*my_realloc(char *src)
{
  static int	i = 2;
  char		*dest;

  if ((dest = malloc(sizeof(char) * (4096 * i))) == NULL)
    {
      my_putstr("Error : 'my_realloc' failed\n");
      return (NULL);
    }
  if ((dest = my_strcpy(src, dest)) == NULL)
    return (NULL);
  return (dest);
}
