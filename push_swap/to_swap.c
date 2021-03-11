/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 14:16:33 by ielbadao          #+#    #+#             */
/*   Updated: 2021/03/09 13:28:24 by ielbadao         ###   ########.fr       */
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

	if (g_index[0] > 0)
	{
			top = pop(g_a, 0);
			_peak = peak(g_a, 0);
			push(g_a, top, 0);
			if (top > _peak)
				return (1);
	}
	return (0);
}
