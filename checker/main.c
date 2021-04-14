/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:28:29 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/14 11:00:27 by ielbadao         ###   ########.fr       */
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
	if (!error_handler(argc, argv, &a))
		return (1);
	while (!is_sorted(a))
	{
		in(0, &action);
		execute(action, &a, &b);
		print_stack(a);
	}
	return (0);
}
