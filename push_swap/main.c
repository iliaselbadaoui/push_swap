/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 09:44:25 by ielbadao          #+#    #+#             */
/*   Updated: 2021/03/07 13:50:36 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_bool	print_err_free()
{
	println("Error\n");
	free(g_a);
	free(g_b);
	return (false);
}

static t_bool	error_handler(int argc, t_string *argv)
{
	long	holder;
	int		index;

	argv++;
	g_a = (t_stack)malloc(sizeof(int) * (argc - 1));
	g_b = (t_stack)malloc(sizeof(int) * (argc - 1));
	g_index[0] = g_index[1] = argc - 2;
	while (*argv)
	{
		index = 0;
		if (!is_number(*argv))
			return (print_err_free());
		if ((holder = ft_atol(*argv)) > INT32_MAX ||
		(holder = ft_atol(*argv)) < INT32_MIN)
			return (print_err_free());
		while (index < argc - 2)
			if (g_a[index++] == holder)
				return (print_err_free());
		push(g_a, holder, 0);
		argv++;
	}
	return (true);
}

int				main(int argc, t_string *argv)
{
	int i = argc - 2;
	if (!error_handler(argc, argv))
		return (1);
	sort_stack();
	return (0);
}
