/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hill_climbing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 12:58:59 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/14 14:55:40 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	hill_climbing(t_stack **a, t_stack **b, t_stack *goal)
{
	printf("MD: %d\n", manhattan_distance(*a, *b, goal));
}
