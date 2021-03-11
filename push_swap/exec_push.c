/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 22:10:26 by ielbadao          #+#    #+#             */
/*   Updated: 2021/03/10 11:31:46 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			exec_push(int instruction)
{
	t_string	ops[2];

	ops[0] = "pa\n\0";
	ops[1] = "pb\n\0";
	println(ops[instruction - 4]);
	if (instruction == 4)
		push(g_a, pop(g_b, 1), 0);
	else if (instruction == 5)
		push(g_b, pop(g_a, 0), 1);
}
