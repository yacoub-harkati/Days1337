CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = ./srcs/
SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRCS = $(addprefix $(SRC_DIR), $(SRC))
HEAD = ./includes/
OBJS = $(SRCS:.c=.o)
NAME = libft.a
LIB = ranlib
AR = ar rc
RM = rm -f

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c -I $(HEAD) $< -o $(<:.c=.o)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(LIB) $(NAME)

fclean: clean
	$(RM) $(NAME)

clean:
	$(RM) $(OBJS)

re: fclean all

.PHONY: clean fclean all re