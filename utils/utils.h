/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:24:45 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/13 19:10:00 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include <stdlib.h>
# include <unistd.h>

typedef char	*t_string;
typedef enum e_bool
{
	false,
	true
}				t_bool;
typedef struct	s_stack
{
	int				value;
	struct s_stack	*prev;
}				t_stack;
t_bool		push_stack(t_stack **dest, t_stack **src);
t_bool		swap(t_stack **stack);
t_bool		rotate(t_stack	**stack);
t_bool		reverse_rotate(t_stack **stack);
t_bool		is_sorted(t_stack	*stack);
t_bool		equals(t_string s1, t_string s2);
t_bool		error_handler(int argc, t_string *argv, t_stack **a);
t_bool		execute(t_string action, t_stack **dest, t_stack **src);
t_bool		is_number(t_string nbr);
long		ft_atol(char *number);
int			sizeof_stack(t_stack *stack);
void		print_fd(int fd, t_string str);
void		push(t_stack **stack, int value);
t_stack		*pop(t_stack	**stack);
t_stack		*stack_dup(t_stack *stack);
#endif
