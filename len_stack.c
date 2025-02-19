/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:41:29 by abifkirn          #+#    #+#             */
/*   Updated: 2025/02/03 12:14:41 by abifkirn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	len_stack(t_stack **stack_a)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = *stack_a;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
