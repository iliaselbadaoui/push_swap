/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 14:44:47 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/13 10:21:14 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

long	ft_atol(char *number)
{
	long		result;
	long		sign;

	if (!number)
		return (0);
	result = 0;
	while (*number == ' ')
		number++;
	sign = 1;
	if (*number == '-')
	{
		number++;
		sign = -1;
	}
	if (*number == '+')
		number++;
	while (*number >= '0' && *number <= '9')
	{
		result *= 10;
		result += *number - '0';
		number++;
	}
	return (result * sign);
}
