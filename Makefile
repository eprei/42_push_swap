NAME = push_swap

NAMELIBFT = libft.a

SRCS = main.c node_management.c exit.c \
	operations_1.c operations_2.c operations_3.c checkers.c \
	radx.c aux.c

OBJ = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

CC = gcc

LIBFTPATH = ./libft

all: $(NAME)

$(NAME):
	@ make -C $(LIBFTPATH)
	@ CC $(SRCS) -L$(LIBFTPATH) -lft -o $(NAME)

clean:
	@rm -rf $(OBJ)
	@make clean -C $(LIBFTPATH)

fclean: clean
	@ rm -rf $(NAME)
	@ make fclean -C $(LIBFTPATH)

re: fclean all

.PHONY: all clean fclean re