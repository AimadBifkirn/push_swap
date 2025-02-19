/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OP-reverse_rotate_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:21:29 by abifkirn          #+#    #+#             */
/*   Updated: 2025/02/09 14:52:32 by abifkirn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rra(t_stack **list_a)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (list_a == NULL || *list_a == NULL || (*list_a)->next == NULL)
		return ;
	tmp = *list_a;
	tmp2 = NULL;
	while (tmp->next)
	{
		tmp2 = tmp;
		tmp = tmp->next;
	}
	tmp2->next = NULL;
	tmp2 = *list_a;
	*list_a = tmp;
	(*list_a)->next = tmp2;
}

void	rrb(t_stack **list_b)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (list_b == NULL || *list_b == NULL || (*list_b)->next == NULL)
		return ;
	tmp = *list_b;
	tmp2 = NULL;
	while (tmp->next)
	{
		tmp2 = tmp;
		tmp = tmp->next;
	}
	tmp2->next = NULL;
	tmp2 = *list_b;
	*list_b = tmp;
	(*list_b)->next = tmp2;
}

void	rrr(t_stack **list_a, t_stack **list_b)
{
	rra(list_a);
	rra(list_b);
}
