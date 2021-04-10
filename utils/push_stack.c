/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 23:17:21 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/10 23:21:32 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_bool	push_stack(t_stack **dest, t_stack **src)
{
	t_stack	*tmp;

	if (sizeof_stack(*src) == 0)
		return (false);
	tmp = pop(src);
	push(dest, tmp->value);
	free(tmp);
	return (true);
}
