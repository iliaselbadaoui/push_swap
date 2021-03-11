/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 09:50:50 by ielbadao          #+#    #+#             */
/*   Updated: 2021/03/09 11:51:45 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				pop(t_stack stack, int stack_number)
{
	int			res;
	
	res = INT32_MIN;
	if (g_index[stack_number] >= 0)
	{
		res = stack[g_index[stack_number]];
		g_index[stack_number]--;
	}
	return (res);
}
