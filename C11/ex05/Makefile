CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = op.c do_op.c ft_strcmp.c ft_putnbr.c ft_putchar.c ft_atoi.c main.c
OBJS = $(SRCS:.c=.o)
NAME = do-op
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -I./ -o $@ $(OBJS)

$(OBJS): %.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re