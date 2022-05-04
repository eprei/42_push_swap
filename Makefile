NAME = push_swap

NAMELIBFT = libft.a

SRCS = push_swap.c node_management.c

OBJ = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

CC = gcc

LIBFTPATH = ./libft

all: $(NAME)

$(NAME):
	make -C $(LIBFTPATH)
	CC $(SRCS) -L$(LIBFTPATH) -lft -o $(NAME)

clean:
	rm -rf $(OBJ)
	make clean -C $(LIBFTPATH)

fclean: clean
	rm -rf $(NAME)
	make fclean -C $(LIBFTPATH)

re: fclean all

.PHONY: all clean fclean re