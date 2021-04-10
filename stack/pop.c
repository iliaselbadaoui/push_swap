/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:05:28 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/10 23:07:53 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*pop(t_stack	**stack)
{
	t_stack		*ret;

	ret = NULL;
	if (*stack)
	{
		ret = *stack;
		*stack = (*stack)->prev;
	}
	return (ret);
}
