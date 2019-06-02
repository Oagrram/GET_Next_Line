NAME = libft.a
CC = gcc
FLAGS = -Werror -Wextra -Wall
SRCS = *.c
OBJS = *.o

all : $(NAME)

$(NAME) :
	$(CC) $(FLAGS) -c $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean :
	/bin/rm -f $(OBJS)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
