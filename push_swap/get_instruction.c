/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_instruction.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 12:34:22 by ielbadao          #+#    #+#             */
/*   Updated: 2021/03/26 15:06:21 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				get_instruction()
{
	int 	instruction;
	
	if ((instruction = to_rotate()) > 0)
		return (instruction);
	else if ((instruction = to_reverse_rotate()) > 0)
		return (instruction);
	else if ((instruction = to_swap()) > 0)
		return (instruction);
	else if ((instruction = to_push()) > 0)
		return (instruction);
	else
		return (0);
}
