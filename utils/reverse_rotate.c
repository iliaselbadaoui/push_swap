/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 10:04:41 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/13 10:25:14 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_bool	reverse_rotate(t_stack **stack)
{
	t_stack	*tmp_stack;
	t_stack	*holder;
	t_stack	*first;

	if (sizeof_stack(*stack) < 2)
		return (false);
	tmp_stack = NULL;
	while (*stack)
	{
		holder = pop(stack);
		push(&tmp_stack, holder->value);
		free(holder);
	}
	first = pop(&tmp_stack);
	while (tmp_stack)
	{
		holder = pop(&tmp_stack);
		push(stack, holder->value);
		free(holder);
	}
	push(stack, first->value);
	free(first);
	return (true);
}
