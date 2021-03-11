/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 09:41:10 by ielbadao          #+#    #+#             */
/*   Updated: 2021/03/10 17:21:04 by ielbadao         ###   ########.fr       */
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
int				g_size;
t_stack			g_a;
t_stack			g_b;

long			ft_atol(char *number);
t_bool			is_number(t_string expr);
t_bool			push(t_stack stack, int value, int stack_number);
int				pop(t_stack stack, int stack_number);
int				peak(t_stack stack, int stack_number);
void			sort_stack(void);
void			println(t_string str);
t_bool			is_sorted();
t_bool			is_sorted_after_push();
int				get_instruction();
void			execute(int instruction);
void			exec_swap(int swap_type);
void			exec_push(int instruction);
void			exec_rotate();
void			exec_reverse_rotate();
t_stack			get_stack(int index);
int				to_swap();
int				to_push();
int				to_rotate();
int				to_reverse_rotate();
#endif
