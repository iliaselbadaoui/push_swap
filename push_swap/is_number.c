/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 09:55:19 by ielbadao          #+#    #+#             */
/*   Updated: 2021/03/07 09:58:43 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool			is_number(t_string expr)
{	
	while (*expr)
	{
		if (*expr < '0' || *expr > '9')
			return (false);
		expr++;
	}
	return (true);
}
