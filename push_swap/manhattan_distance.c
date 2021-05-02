/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manhattan_distance.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 13:01:29 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/18 21:02:17 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int abs_val(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	manhattan_distance(t_stack *a)
{
	int		dist;
	int		holder;
	int		pos_a;
	int 	pos_goal;
	t_stack	*goal_dup;
	
	dist = 0;
	pos_a = 0;
	while (a)
	{
		holder = pop(&a)->value;
		pos_goal = 0;
		goal_dup = get_goal(a);
		while (goal_dup)
		{
			if (holder == goal_dup->value)
				break ;
			free(pop(&goal_dup));
			pos_goal++;
		}
		while (goal_dup)
			free(pop(&goal_dup));
		dist += abs_val(pos_a - pos_goal);
		pos_a++;
	}
	return (dist);
}
