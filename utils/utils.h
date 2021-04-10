/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielbadao <ielbadao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:24:45 by ielbadao          #+#    #+#             */
/*   Updated: 2021/04/10 23:16:26 by ielbadao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include <stdlib.h>
# include "../stack/stack.h"

typedef enum e_bool
{
	false,
	true
}				t_bool;
t_bool		swap(t_stack **stack);
t_bool		is_sorted(t_stack	*stack);
#endif
