/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 23:00:44 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/10 23:05:36 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	swap(t_stack **stack)
{
	t_stack		*peak;
	t_stack		*second_peak;

	peak = pop(stack);	
	second_peak = pop(stack);
	push(stack, peak->value);
	push(stack, second_peak->value);
	free(peak);
	free(second_peak);
}
