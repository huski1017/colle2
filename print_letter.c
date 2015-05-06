/*
** print_letter.c for colle in /home/wroble_h/rendu/colle-2_L4KT1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Wed May  6 22:04:08 2015 Hubert Wroblewski
** Last update Wed May  6 22:07:23 2015 Hubert Wroblewski
*/

int	print_letter(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '=' && str[i] != '\0')
    {
      i++;
    }
  if (str[i] == '\0')
    return (-1);
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
  return (0);
}
