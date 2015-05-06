/*
** check_maj.c for colle in /home/lefebv_5/colle-2_L4KT1
** 
** Made by Pierre Lefebvre
** Login   <lefebv_5@epitech.net>
** 
** Started on  Wed May  6 21:45:59 2015 Pierre Lefebvre
** Last update Wed May  6 22:01:32 2015 Pierre Lefebvre
*/

int	    	check_maj(char *str, int i)
{
  static int	check = 0;
  static int	ret = 0;

  if (check > i)
    return (ret);
  while (str[check] != ' ' && str[check] != '\0')
    {
      if ('A' > str[check] && str[check] > 'Z')
	ret = 1;
      check = check + 1;
    }
  return (ret);
}
      
