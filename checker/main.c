/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:28:29 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/14 13:12:48 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include <stdio.h>

static void	print_stack(t_stack *stack)
{
	while (stack)
	{
		printf("%d\n", pop(&stack)->value);
	}
}

int	main(int argc, t_string *argv)
{
	t_stack		*a;
	t_stack		*b;
	t_string	action;

	a = NULL;
	b = NULL;
	if (!error_handler(argc, argv, &a, NULL))
		return (1);
	while (in(0, &action))
	{
		if (!action_check(action))
		{
			print_fd(2, "Error, invalid action\n");
			continue ;
		}
		execute(action, &a, &b);
		print_stack(a);
	}
	if (is_sorted(a))
		print_fd(1, "OK\n");
	else
		print_fd(1, "KO\n");
	return (0);
}
