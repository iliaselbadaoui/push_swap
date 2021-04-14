makeDir = make

all:
	@$(makeDir) -C utils/
	@$(makeDir) -C checker/
	@$(makeDir) -C push_swap/
clean:
	@$(makeDir) clean -C utils/
	@$(makeDir) clean -C checker/
	@$(makeDir) clean -C push_swap/
fclean:
	@$(makeDir) fclean -C utils/
	@$(makeDir) fclean -C checker/
	@$(makeDir) fclean -C push_swap/
re:
	@$(makeDir) re -C utils/
	@$(makeDir) re -C checker/
	@$(makeDir) re -C push_swap/