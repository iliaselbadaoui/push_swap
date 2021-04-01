/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 14:16:33 by ielbadao          #+#    #+#             */
/*   Updated: 2021/03/26 15:01:51 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack			get_stack(int index)
{
	if (index == 0)
		return (g_a);
	if (index == 1)
		return (g_b);
	return (NULL);
}

int				to_swap()
{
	int			top;
	int			_peak;
	int			sum;

	sum = 0;
	if (g_index[0] > 0)
	{
		top = pop(g_a, 0);
		_peak = peak(g_a, 0);
		push(g_a, top, 0);
		if (top > _peak)
			sum++;
	}
	if (g_index[1] > 0)
	{
		top = pop(g_b, 1);
		_peak = peak(g_b, 1);
		push(g_b, top, 1);
		if (top > _peak)
			sum++;
	}
	if (sum == 2)
		sum++;
	return (sum);
}
