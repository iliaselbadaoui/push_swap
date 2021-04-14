/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_dup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 16:32:06 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/14 15:04:59 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_stack	*stack_dup(t_stack *stack)
{
	t_stack	*rev;
	t_stack	*res;

	rev = NULL;
	res = NULL;
	while (stack)
		push(&rev, pop(&stack)->value);
	while (rev)
		push(&res, pop(&rev)->value);
	return (res);
}
