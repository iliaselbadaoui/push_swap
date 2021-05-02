/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_goal.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:02:54 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/17 20:02:14 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static void	get_goal_help(t_stack *stack, int **sorted)
{
	int		i;
	int		j;
	int		size;
	int		swap;
	
	size = sizeof_stack(stack);
	*sorted = (int *)malloc(sizeof(int) * size);
	i = 0;
	while (stack)
		(*sorted)[i++] = pop(&stack)->value;
	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if ((*sorted)[i] < (*sorted)[j])
			{
				swap = (*sorted)[i];
				(*sorted)[i] = (*sorted)[j];
				(*sorted)[j] = swap;
			}
			j++;	
		}
		i++;
	}
}

t_stack	*get_goal(t_stack *stack)
{
	int		size;
	int		i;
	int		*sorted;
	t_stack	*goal;

	if (!stack)
		return (NULL);
	sorted = NULL;
	goal = NULL;
	get_goal_help(stack, &sorted);
	i = 0;
	size = sizeof_stack(stack);
	while (i < size)
		push(&goal, sorted[i++]);
	return (goal);
}
