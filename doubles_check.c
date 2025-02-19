/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubles_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:36:22 by abifkirn          #+#    #+#             */
/*   Updated: 2025/02/06 13:26:16 by abifkirn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	doubles_check(t_stack **stack_a)
{
	t_stack	*i;
	t_stack	*j;

	i = *stack_a;
	j = NULL;
	while (i->next)
	{
		j = i->next;
		while (j)
		{
			if (j->num == i->num)
			{
				free_list(*stack_a);
				write (2, "Error\n", 6);
				exit (-1);
			}
			j = j->next;
		}
		i = i->next;
	}
}
