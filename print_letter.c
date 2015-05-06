/*
** print_letter.c for colle in /home/wroble_h/rendu/colle-2_L4KT1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Wed May  6 22:04:08 2015 Hubert Wroblewski
** Last update Wed May  6 22:42:03 2015 Hubert Wroblewski
*/

#include "braille.h"

int	print_letter(char *str, int maj)
{
  int	i;

  i = 0;
  while (str[i] != '=' && str[i] != '\0')
    {
      i++;
    }
  i++;
  if (str[i] == '\0')
    return (-1);
  if (maj == 1)
    {
      my_putstr("46-");
    }
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
  return (0);
}
