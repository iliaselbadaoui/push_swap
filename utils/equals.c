/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   equals.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 16:40:31 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/11 17:18:41 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"


t_bool	equals(t_string s1, t_string s2)
{
	if (!s1 || !s2)
		return (false);
	if (s1 == s2)
		return (true);
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (false);
		s1++;
		s2++;
	}
	if (*s1 != *s2)
		return (false);
	return (true);
}