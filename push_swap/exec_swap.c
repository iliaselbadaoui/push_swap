/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:48:38 by ielbadao          #+#    #+#             */
/*   Updated: 2021/03/08 20:32:59 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		swap_top(int stack_number)
{
	int		first;
	int		sec;

	first = pop(get_stack(stack_number), stack_number);
	sec = pop(get_stack(stack_number), stack_number);
	push(get_stack(stack_number), first, stack_number);
	push(get_stack(stack_number), sec, stack_number);
}

void			exec_swap(int swap_type)
{
	t_string	ops[3];
	ops[0] = "sa\n\0";
	ops[1] = "sb\n\0";
	ops[2] = "ss\n\0";
	println(ops[swap_type - 1]);
	if (swap_type == 3 || swap_type == 2)
	{
		swap_top(1);
		swap_type -= 2;
	}
	if (swap_type == 1)
		swap_top(0);
}
