/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OP-swap_push_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:21:49 by abifkirn          #+#    #+#             */
/*   Updated: 2025/02/09 14:59:49 by abifkirn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sa(t_stack **list_a)
{
	t_stack	*tmp;
	t_stack	*third;

	if (list_a == NULL || *list_a == NULL || (*list_a)->next == NULL)
		return ;
	tmp = *list_a;
	*list_a = (*list_a)->next;
	third = (*list_a)->next;
	(*list_a)->next = tmp;
	tmp->next = third;
}

void	sb(t_stack **list_b)
{
	t_stack	*tmp;
	t_stack	*third;

	if (list_b == NULL || *list_b == NULL || (*list_b)->next == NULL)
		return ;
	tmp = *list_b;
	*list_b = (*list_b)->next;
	third = (*list_b)->next;
	(*list_b)->next = tmp;
	tmp->next = third;
}

void	ss(t_stack **list_a, t_stack **list_b)
{
	sa(list_a);
	sb(list_b);
}

void	pa(t_stack **list_a, t_stack **list_b)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (list_b == NULL || *list_b == NULL)
		return ;
	tmp = *list_b;
	*list_b = (*list_b)->next;
	tmp2 = *list_a;
	*list_a = tmp;
	(*list_a)->next = tmp2;
}

void	pb(t_stack **list_a, t_stack **list_b)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (list_a == NULL || *list_a == NULL)
		return ;
	tmp = *list_a;
	*list_a = (*list_a)->next;
	tmp2 = *list_b;
	*list_b = tmp;
	(*list_b)->next = tmp2;
}
