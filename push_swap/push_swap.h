/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 21:55:25 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/14 14:58:11 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include "../utils/utils.h"

int			manhattan_distance(t_stack *a, t_stack *b, t_stack *goal);
void		hill_climbing(t_stack **a, t_stack **b, t_stack *goal);
#endif
