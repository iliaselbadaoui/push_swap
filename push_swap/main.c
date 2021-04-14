/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 09:44:25 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/14 17:27:11 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, t_string *argv)
{
	t_stack		*a;
	t_stack		*b;
	t_stack		*g;

	a = NULL;
	b = NULL;
	g = NULL;
	if (!error_handler(argc, argv, &a, &g))
		return (1);
	hill_climbing(&a, &b, g);
	return (0);
}
