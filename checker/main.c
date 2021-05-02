/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:28:29 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/16 12:15:48 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/utils.h"
#include <stdio.h>

int	main(int argc, t_string *argv)
{
	t_stack		*a;
	t_stack		*b;
	t_string	action;

	a = NULL;
	b = NULL;
	if (!error_handler(argc, argv, &a))
		return (1);
	while (in(0, &action))
	{
		if (!action_check(action))
		{
			print_fd(2, "Error, invalid action\n");
			continue ;
		}
		execute(action, &a, &b);
	}
	if (is_sorted(a))
		print_fd(1, "OK\n");
	else
		print_fd(1, "KO\n");
	return (0);
}
