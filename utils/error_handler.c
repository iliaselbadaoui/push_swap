/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:30:01 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/16 12:02:42 by ielbadao         ###   ########.fr       */
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
	int		argc_dup;
	int		i;

	i = 0;
	argc_dup = argc - 1;
	while (--argc > 0)
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
		i++;
	}
	return (true);
}
