/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 21:59:57 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/10 22:12:38 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	push(t_stack **stack, int value)
{
	t_stack		*tmp;
	if (!stack)
		return ;
	if (!*stack)
	{
		*stack = (t_stack *)malloc(sizeof(t_stack));
		(*stack)->value = value;
		(*stack)->prev = NULL;
		return ;
	}
	tmp = (t_stack *)malloc(sizeof(t_stack));
	tmp->value = value;
	tmp->prev = *stack;
	*stack = tmp;
}
