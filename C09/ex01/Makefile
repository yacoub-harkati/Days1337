CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = ./srcs
SRCS = $(shell find $(SRC_DIR) -name "*.c")
HEAD = ./includes/
OBJS = $(SRCS:.c=.o)
NAME = libft.a
LIB = ranlib
AR = ar -rc
RM = rm -f

all: $(NAME)

$(OBJS): $(SRC_DIR)/%.o : $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c -I $(HEAD) $^ -o $@

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(LIB) $(NAME)

fclean: clean
	$(RM) $(NAME)

clean:
	$(RM) $(OBJS)

re: fclean all

.PHONY: clean fclean all re