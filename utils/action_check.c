/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 11:45:06 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/14 12:28:35 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_bool	action_check(t_string action)
{
	if (equals(action, "pa") || equals(action, "pb") || equals(action, "sa"))
		return (true);
	else if (equals(action, "sb") || equals(action, "ss") ||
	equals(action, "ra"))
		return (true);
	else if (equals(action, "rb") || equals(action, "rr") ||
	equals(action, "rra"))
		return (true);
	else if (equals(action, "rrb") || equals(action, "rrr") ||
	equals(action, ""))
		return (true);
	return (false);
}
