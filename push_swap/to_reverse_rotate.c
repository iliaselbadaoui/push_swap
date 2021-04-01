/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 17:03:11 by ielbadao          #+#    #+#             */
/*   Updated: 2021/03/26 15:13:29 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				to_reverse_rotate()
{
	int		i;
	int		min;

	if (g_a[0] > g_a[1] && g_a[0] > g_a[g_index[0]] &&
	g_a[1] < g_a[g_index[0]])
		return (0);
	if (g_index[0] > 0)
	{
		i = 1;
		min = g_a[0];
		while (i <= g_index[0])
		{
			if (min > g_a[i])
				return (0);
			i++;
		}
		return (7);
	}
	return (0);
}
