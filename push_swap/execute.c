/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 12:14:02 by ielbadao          #+#    #+#             */
/*   Updated: 2021/03/25 11:15:00 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			execute(int instruction)
{
	if (instruction == 6)
		exec_rotate();
	else if (instruction == 7)
		exec_reverse_rotate();
	else if (instruction >= 1 && instruction <= 3)
		exec_swap(instruction);
	else if (instruction == 4 || instruction == 5)
		exec_push(instruction);
}
