/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_reverse_rotate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 17:10:16 by ielbadao          #+#    #+#             */
/*   Updated: 2021/03/10 17:40:33 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			exec_reverse_rotate()
{
	int		bot;
	int		i;

	if (g_index[0] > 0)
	{
		bot = g_a[0];
		i = 0;
		println("rra\n");
		while (i <= g_index[0])
		{
			g_a[i] = g_a[i + 1];
			i++;
		}
		g_a[g_index[0]] = bot;
	}
}
