/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hill_climbing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 12:58:59 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/14 20:30:03 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	fill_actions(t_string **actions)
{
	*actions = (t_string *)malloc(sizeof(t_string) * 12);
	(*actions)[0] = ft_strdup("pa");
	(*actions)[1] = ft_strdup("pb");
	(*actions)[2] = ft_strdup("sa");
	(*actions)[3] = ft_strdup("sb");
	(*actions)[4] = ft_strdup("ss");
	(*actions)[5] = ft_strdup("ra");
	(*actions)[6] = ft_strdup("rb");
	(*actions)[7] = ft_strdup("rr");
	(*actions)[8] = ft_strdup("rra");
	(*actions)[9] = ft_strdup("rrb");
	(*actions)[10] = ft_strdup("rrr");
	(*actions)[11] = NULL;
}

static int	try_action(t_string action, t_stack *a, t_stack *b, t_stack *goal)
{
	t_stack	*a_dup;
	t_stack	*b_dup;

	a_dup = stack_dup(a);
	b_dup = stack_dup(b);
	execute(action, &a_dup, &b_dup);
	return (manhattan_distance(a_dup, b_dup, goal));
	// while (a_dup)
	// 	free(pop(&a_dup));
	// while (b_dup)
	// 	free(pop(&b_dup));
}

void	hill_climbing(t_stack **a, t_stack **b, t_stack *goal)
{
	t_string	*actions;
	t_optimum	optimum;
	int			manhattan;
	int			i;

	fill_actions(&actions);
	while (!is_sorted(*a))
	{
		i = 0;
		optimum.md = manhattan_distance(*a, *b, goal);
		while (actions[i])
		{
			manhattan = try_action(actions[i], *a, *b, goal);
			if (manhattan <= optimum.md)
			{
				optimum.md = manhattan;
				optimum.action = actions[i];
			}
			i++;
		}
		execute(optimum.action, a, b);
		print_fd(1, optimum.action);
		print_fd(1, "\n");
	}
}
