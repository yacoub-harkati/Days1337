CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = op.c do_op.c ft_strcmp.c ft_putnbr.c ft_putchar.c ft_atoi.c main.c
NAME = do-op
RM = rm -f

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) -I./ -o $@ $(SRCS)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re