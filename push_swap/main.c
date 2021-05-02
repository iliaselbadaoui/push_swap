/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 09:44:25 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/17 20:54:29 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, t_string *argv)
{
	t_stack		*a;
	t_stack		*b;

	a = NULL;
	b = NULL;
	if (!error_handler(argc, argv, &a))
		return (1);
	hill_climbing(&a, &b);
	// g = get_goal(a);
	// printf("SIZE : %d\n", sizeof_stack(a));
	// while (g)
	// 	printf("%d\n", pop(&g)->value);
	return (0);
}
