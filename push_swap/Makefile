compile = gcc -Wall -Werror -Wextra
src = *.c
Name = push_swap

all: $(Name)

$(Name):
	@$(compile) $(src) ../utils/utils.a -o $(Name)
clean:
	@rm -rf $(obj)
fclean: clean
	@rm -rf $(Name)
re: fclean all

.PHONY: all clean fclean re