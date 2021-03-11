/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 12:05:09 by ielbadao          #+#    #+#             */
/*   Updated: 2021/03/10 11:55:05 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool			is_sorted()
{
	int			i;

	i = g_index[0];
	if (i < g_size - 1)
		return (false);
	while (i > 0)
	{
		if (g_a[i] > g_a[i - 1])
			return (false);
		i--;
	}
	return (true);
}

t_bool			is_sorted_after_push()
{
	int			i;

	i = g_index[0];
	while (i > 0)
	{
		if (g_a[i] > g_a[i - 1])
			return (false);
		i--;
	}
	return (true);
}