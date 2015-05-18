/*
** braille.h for braille.h in /home/lefebv_5/colle-2_L4KT1
** 
** Made by Pierre Lefebvre
** Login   <lefebv_5@epitech.net>
** 
** Started on  Wed May  6 20:17:21 2015 Pierre Lefebvre
** Last update Wed May  6 22:49:53 2015 Hubert Wroblewski
*/

#ifndef BRAILLE_H_
# define BRAILLE_H_

void	my_putchar(char);
int	my_strlen(char *);
void	my_putstr(char *);
void	my_putnbr(int);
static char	**braille_tab(char **, char **);
char	*my_realloc(char *);
int	check_maj(char *, int);
int	find_letter(char **, char);
static char	*my_strcpy(char *, char *);
int	print_letter(char *, int);
static char	**read_txt(char *, int, char **);
int	print_braille(char **, char *);

#endif /* !BRAILLE_H_ */
