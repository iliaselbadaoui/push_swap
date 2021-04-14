/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sizeof_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 23:08:40 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/13 10:20:40 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	sizeof_stack(t_stack *stack)
{
	int		len;

	len = 0;
	while (stack)
	{
		len++;
		stack = stack->prev;
	}
	return (len);
}
