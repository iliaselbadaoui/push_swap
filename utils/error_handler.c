/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:30:01 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/13 10:54:13 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static t_bool	check_doubles(t_stack *stack, int value)
{
	while (stack)
	{
		if (stack->value == value)
			return (false);
		stack = stack->prev;
	}
	return (true);
}

t_bool	error_handler(int argc, t_string *argv, t_stack **a)
{
	int		holder;

	argc--;
	while (argc > 0)
	{
		if (!is_number(argv[argc]))
		{
			print_fd(2, "Error, all args must be numbers");
			return (false);
		}
		holder = ft_atol(argv[argc]);
		if (!check_doubles(*a, holder))
		{
			print_fd(2, "Error, duplicated number");
			return (false);
		}
		push(a, holder);
		argc--;
	}
	return (true);
}
