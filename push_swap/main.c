/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 09:44:25 by ielbadao          #+#    #+#             */
/*   Updated: 2021/03/11 10:24:44 by ielbadao         ###   ########.fr       */
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
	int		argv_index;
	int		index;

	g_a = (t_stack)malloc(sizeof(int) * (argc - 1));
	g_b = (t_stack)malloc(sizeof(int) * (argc - 1));
	g_size = argv_index = argc - 1;
	while (argv_index >= 1)
	{
		index = 0;
		if (!is_number(argv[argv_index]))
			return (print_err_free());		
		if ((holder = ft_atol(argv[argv_index])) > INT32_MAX ||
		holder < INT32_MIN)
			return (print_err_free());
		if (g_index[0] != -1)
		{
			while (index <= g_index[0])
				if (g_a[index++] == holder)
					return (print_err_free());
			push(g_a, holder, 0);
		}
		else
			push(g_a, holder, 0);
		argv_index--;
	}
	return (true);
}

int				main(int argc, t_string *argv)
{
	int i;
	g_index[0] = g_index[1] = -1;
	if (!error_handler(argc, argv))
		return (1);
	i = g_size - 1;
	sort_stack();
	i = g_index[0];
	while (i >= 0)
	{
		printf("%d\n", g_a[i]);
		i--;
	}
	return (0);
}
