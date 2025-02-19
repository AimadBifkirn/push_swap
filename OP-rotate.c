/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OP-rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:21:40 by abifkirn          #+#    #+#             */
/*   Updated: 2025/02/09 11:48:23 by abifkirn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **list_a)
{
	t_stack	*tmp;
	t_stack	*last;

	if (list_a == NULL || *list_a == NULL || (*list_a)->next == NULL)
		return ;
	tmp = *list_a;
	while (tmp->next)
		tmp = tmp->next;
	last = tmp;
	tmp = *list_a;
	*list_a = (*list_a)->next;
	tmp->next = NULL;
	last->next = tmp;
	write(1, "ra\n", 3);
}

void	rb(t_stack **list_b)
{
	t_stack	*tmp;
	t_stack	*last;

	if (list_b == NULL || *list_b == NULL || (*list_b)->next == NULL)
		return ;
	tmp = *list_b;
	while (tmp->next)
		tmp = tmp->next;
	last = tmp;
	tmp = *list_b;
	*list_b = (*list_b)->next;
	tmp->next = NULL;
	last->next = tmp;
	write(1, "rb\n", 3);
}

void	rr(t_stack **list_a, t_stack **list_b)
{
	t_stack	*tmp;
	t_stack	*last;

	if (list_a == NULL || *list_a == NULL || (*list_a)->next == NULL)
		return ;
	tmp = *list_a;
	while (tmp->next)
		tmp = tmp->next;
	last = tmp;
	tmp = *list_a;
	*list_a = (*list_a)->next;
	tmp->next = NULL;
	last->next = tmp;
	if (list_b == NULL || *list_b == NULL || (*list_b)->next == NULL)
		return ;
	tmp = *list_b;
	while (tmp->next)
		tmp = tmp->next;
	last = tmp;
	tmp = *list_b;
	*list_b = (*list_b)->next;
	tmp->next = NULL;
	last->next = tmp;
	write(1, "rr\n", 3);
}
