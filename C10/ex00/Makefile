CC = cc
SRC = main.c
OBJS = main.o
CFLAGS = -Wall -Wextra -Werror
INCLUDES = ./
NAME = ft_display_file
RM =  rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -I$(INCLUDES) $(OBJS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re