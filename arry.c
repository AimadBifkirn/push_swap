/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arry.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 18:29:05 by abifkirn          #+#    #+#             */
/*   Updated: 2025/02/03 12:15:21 by abifkirn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_in_table(int *table, int len)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < len - 1)
	{
		j = 0;
		while (j < len - 1)
		{
			if (table[j] > table[j + 1])
			{
				tmp = table[j + 1];
				table[j + 1] = table[j];
				table[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	fill_arr(t_stack **stack_a, int *arr)
{
	t_stack	*temp;
	int		i;

	temp = *stack_a;
	i = 0;
	while (temp)
	{
		arr[i] = temp->num;
		temp = temp->next;
		i++;
	}
}
