/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:30:01 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/14 15:27:32 by ielbadao         ###   ########.fr       */
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

static void	setup_goal(int argc, int *sorted, t_stack **goal)
{
	int	i;
	int	j;
	int	swap;
	
	i = 0;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (sorted[i] < sorted[j])
			{
				swap = sorted[i];
				sorted[i] = sorted[j];
				sorted[j] = swap;
			}
			j++;	
		}
		i++;
	}
	i = 0;
	
	while (i < argc)
		push(goal, sorted[i++]);
}

t_bool	error_handler(int argc, t_string *argv, t_stack **a, t_stack **goal)
{
	int		holder;
	int		*sorted;
	int		argc_dup;
	int		i;

	i = 0;
	argc_dup = argc - 1;
	sorted = (int *)malloc(sizeof(int) * argc_dup);
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
		sorted[i] = holder;
		i++;
	}
	if (goal)
		setup_goal(argc_dup, sorted, goal);
	return (true);
}
