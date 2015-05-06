##
## Makefile for Make in /home/wroble_h/rendu/colle-2_L4KT1
## 
## Made by Hubert Wroblewski
## Login   <wroble_h@epitech.net>
## 
## Started on  Wed May  6 18:58:38 2015 Hubert Wroblewski
## Last update Wed May  6 21:33:16 2015 Pierre Lefebvre
##

CC	= gcc

RM	= rm -f

NAME	= braille

SRCS	= str.c \
	trans_braille.c \
	my_realloc.c 

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
