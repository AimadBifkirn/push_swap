/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OP-swap_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:21:49 by abifkirn          #+#    #+#             */
/*   Updated: 2025/02/09 12:15:29 by abifkirn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	write(1, "sa\n", 3);
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
	write(1, "sb\n", 3);
}

void	ss(t_stack **list_a, t_stack **list_b)
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
	if (list_b == NULL || *list_b == NULL || (*list_b)->next == NULL)
		return ;
	tmp = *list_b;
	*list_b = (*list_b)->next;
	third = (*list_b)->next;
	(*list_b)->next = tmp;
	tmp->next = third;
	write(1, "ss\n", 3);
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
	write(1, "pa\n", 3);
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
	write(1, "pb\n", 3);
}
