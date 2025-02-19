/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OP-rotate_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:21:40 by abifkirn          #+#    #+#             */
/*   Updated: 2025/02/09 14:52:35 by abifkirn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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
}

void	rr(t_stack **list_a, t_stack **list_b)
{
	ra(list_a);
	rb(list_b);
}
