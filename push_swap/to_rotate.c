/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 13:19:41 by ielbadao          #+#    #+#             */
/*   Updated: 2021/03/10 17:31:21 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				to_rotate()
{
	int		i;
	int		max;

	i = g_index[0];
	if (i > 1)
	{
		max = g_a[i--];
		while (i > 0)
		{
			if (max < g_a[i])
				return (0);
			i--;
		}
		return (6);
	}
	return (0);
}