/*
** letter.c for colle in /home/wroble_h/rendu/colle-2_L4KT1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Wed May  6 21:45:04 2015 Hubert Wroblewski
** Last update Wed May  6 22:03:49 2015 Hubert Wroblewski
*/

#include <stdlib.h>

int	find_letter(char **str, char c)
{
  int	i;

  i = 0;
  while (str[i] != NULL)
    {
      if (str[i][0] == c)
	return (i);
      i++;
    }
  return (-1);
}
