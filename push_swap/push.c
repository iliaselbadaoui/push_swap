/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 09:50:53 by ielbadao          #+#    #+#             */
/*   Updated: 2021/03/09 11:51:09 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool			push(t_stack stack, int value, int stack_number)
{	
	if (g_index[stack_number] < g_size)
	{
		g_index[stack_number]++;
		stack[g_index[stack_number]] = value;
		return (true);
	}
	return (false);
}
