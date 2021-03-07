compile = gcc -Wall -Werror -Wextra
NAME = push_swap
src = *.c
header = -Ipush_swap.h

all: $(NAME)

$(NAME):
	@$(compile) $(src) $(header) -o $(NAME)
clean:
	@rm -rf $(NAME)
fclean: clean

re: fclean all

.PHONY: all clean fclean re