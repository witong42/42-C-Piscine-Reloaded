NAME = ft_display_file

SRCS = display_file.c

OBJS = display_file.o

CC = gcc

FLAGS = -Wall -Wextra -Werror

%.o : %.c
	$(CC) $(FLAGS) -c $(SRCS) -o $(OBJS)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $< -o $@

all : $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
