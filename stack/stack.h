/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 21:56:58 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/10 23:10:49 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H
# include <stdlib.h>

typedef struct	s_stack
{
	int				value;
	struct s_stack	*prev;
}				t_stack;

void			push(t_stack **stack, int value);
t_stack			*pop(t_stack	**stack);
int				sizeof_stack(t_stack *stack);
#endif
