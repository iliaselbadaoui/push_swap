/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 20:43:28 by ielbadao          #+#    #+#             */
/*   Updated: 2021/03/10 11:56:56 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		to_pushb()
{
	int		cursor;

	cursor = -1;
	if (g_index[0] - 1 > 0)
		cursor = g_index[0] - 1;
	while (cursor > 0)
	{
		if (g_a[cursor] > g_a[cursor - 1])
			return (5);
		cursor--;
	}
	return (0);
}

int				to_push()
{
	if (to_pushb())
		return (5);
	if (is_sorted_after_push())
		return (4);
	return (0);
}
