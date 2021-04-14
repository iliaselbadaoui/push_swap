/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:24:45 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/14 17:19:00 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# define BUFFER_SIZE 4096
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
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
t_bool		error_handler(int argc, t_string *argv, t_stack **a, t_stack **goal);
t_bool		execute(t_string action, t_stack **dest, t_stack **src);
t_bool		is_number(t_string nbr);
t_bool		action_check(t_string action);
long		ft_atol(char *number);
int			sizeof_stack(t_stack *stack);
int			ft_strlen(const char *str);
int			process_line(char **line, char **remain);
int			process_remain(char **remain, char **line);
int			in(int fd, char **line);
char		*ft_strchr(const char *s, int c);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strdup(const char *s);
void		print_fd(int fd, t_string str);
void		push(t_stack **stack, int value);
void		ft_free(char **p);
void		fill_line(char **line, char *buffer);
t_stack		*pop(t_stack	**stack);
t_stack		*stack_dup(t_stack *stack);
#endif
