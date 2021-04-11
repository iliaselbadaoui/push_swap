/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 23:25:09 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/11 09:47:45 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_bool	rotate(t_stack	**stack)
{
	t_stack	*tmp_stack;
	t_stack	*holder;
	t_stack	*first;

	if (sizeof_stack(stack) < 2)
		return (false);
	first = pop(stack);
	tmp_stack = NULL;
	while (*stack)
	{
		holder = pop(stack);
		push(&tmp_stack, holder->value);
		free(holder);
	}
	push(stack, first->value);
	free(first);
	while (tmp_stack)
	{
		holder = pop(tmp_stack);
		push(stack, holder->value);
		free(holder);
	}
	return (true);
}
