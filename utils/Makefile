compile = gcc -c -Wall -Werror -Wextra
archive = ar rc
src = *.c
obj = *.o
Name = utils.a

all: $(Name)

$(Name):
	@$(compile) $(src) -Iutils.h -I../stack/utils.h
	@$(archive) $(Name) $(obj)
clean:
	@rm -rf $(obj)
fclean: clean
	@rm -rf $(Name)
re: fclean all

.PHONY: all clean fclean re