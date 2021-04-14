/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:26:08 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/14 12:03:06 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_bool	is_sorted(t_stack	*stack)
{
	int		min;

	min = stack->value;
	stack = stack->prev;
	while (stack)
	{
		if (min > stack->value)
			return (false);
		min = stack->value;
		stack = stack->prev;
	}
	return (true);
}
