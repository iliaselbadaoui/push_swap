/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 09:41:10 by ielbadao          #+#    #+#             */
/*   Updated: 2021/03/07 13:50:44 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef int		*t_stack;
typedef char	*t_string;
typedef enum	e_bool
{
	false,
	true
}				t_bool;

int				g_index[2];
t_stack			g_a;
t_stack			g_b;

long			ft_atol(char *number);
t_bool			is_number(t_string expr);
t_bool			push(t_stack stack, int value, int stack_number);
void			sort_stack(void);
void			println(t_string str);
#endif
