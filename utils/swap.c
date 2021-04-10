/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 23:00:44 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/10 23:16:39 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_bool	swap(t_stack **stack)
{
	t_stack		*peak;
	t_stack		*second_peak;

	if (sizeof_stack(*stack) < 2)
		return (false);
	peak = pop(stack);	
	second_peak = pop(stack);
	push(stack, peak->value);
	push(stack, second_peak->value);
	free(peak);
	free(second_peak);
	return (true);
}
