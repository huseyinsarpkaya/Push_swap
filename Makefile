CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = control.c\
		free_memory.c\
		ft_error.c\
		main.c\
		push_swap_action.c\
		push_swap_action_2.c\
		radix_sort.c\
		sort_three.c\
		sort.c\
		utils.c\
		ft_sort_five.c\
		ft_sort_four.c\

OBJ = $(SRC:.c=.o)

NAME = push_swap

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
