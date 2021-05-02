/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:48:38 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/16 12:35:14 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static t_bool	execute_help(t_string action, t_stack **dest, t_stack **src)
{
	if (equals("pa", action))
		return (push_stack(dest, src));
	else if (equals("pb", action))
		return (push_stack(src, dest));
	else if (equals("sa", action))
		return (swap(dest));
	else if (equals("sb", action))
		return (swap(src));
	else if (equals("ra", action))
		return (rotate(dest));
	else if (equals("rb", action))
		return (rotate(src));
	else if (equals("rra", action))
		return (reverse_rotate(dest));
	else if (equals("rrb", action))
		return (reverse_rotate(src));
	return (false);
}

t_bool	execute(t_string action, t_stack **dest, t_stack **src)
{
	if (execute_help(action, dest, src))
		return (true);
	else if (equals("ss", action))
	{
		if (swap(dest))
			return (swap(src));
	}
	else if (equals("rr", action))
	{
		if (rotate(dest))
			return (rotate(src));
	}
	else if (equals("rrr", action))
	{
		if (reverse_rotate(dest))
			return (reverse_rotate(src));
	}
	return (false);
}
