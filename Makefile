makeDir = make

all:
	@$(makeDir) -C utils/
	@$(makeDir) -C checker/
clean:
	@$(makeDir) clean -C utils/
	@$(makeDir) clean -C checker/
fclean:
	@$(makeDir) fclean -C utils/
	@$(makeDir) fclean -C checker/
re:
	@$(makeDir) re -C utils/
	@$(makeDir) re -C checker/