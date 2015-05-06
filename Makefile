##
## Makefile for Make in /home/wroble_h/rendu/colle-2_L4KT1
## 
## Made by Hubert Wroblewski
## Login   <wroble_h@epitech.net>
## 
## Started on  Wed May  6 22:03:10 2015 Hubert Wroblewski
## Last update Wed May  6 22:11:13 2015 Hubert Wroblewski
##


CC	= gcc

RM	= rm -f

NAME	= braille

SRCS	= str.c \
	trans_braille.c \
	my_realloc.c \
	letter.c \
	check_maj.c \
	print_letter.c

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
