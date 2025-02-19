/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:44:14 by abifkirn          #+#    #+#             */
/*   Updated: 2025/02/11 09:48:15 by abifkirn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	update_index(int *start, int *end, int size)
{
	if (*start < *end)
		(*start)++;
	if (*end < size - 1)
		(*end)++;
}

int	find_max(t_stack **stack_b)
{
	t_stack	*temp;
	int		max;
	int		i;
	int		max_index;

	temp = *stack_b;
	max = temp->num;
	i = 0;
	max_index = 0;
	while (temp)
	{
		if (temp->num > max)
		{
			max = temp->num;
			max_index = i;
		}
		temp = temp->next;
		i++;
	}
	return (max_index);
}

void	push_to_b(t_stack **stk_a, t_stack **stk_b, int *arr, int arr_end)
{
	int	arr_start;
	int	size;

	size = len_stack(stk_a);
	arr_start = 0;
	while (*stk_a)
	{
		if ((*stk_a)->num <= arr[arr_start])
		{
			pb(stk_a, stk_b);
			if ((*stk_b)->next)
				rb(stk_b);
			update_index(&arr_start, &arr_end, size);
		}
		else if ((*stk_a)->num <= arr[arr_end])
		{
			pb(stk_a, stk_b);
			update_index(&arr_start, &arr_end, size);
			if ((*stk_b)->next && (*stk_b)->num < (*stk_b)->next->num)
				sb(stk_b);
		}
		else
			ra(stk_a);
	}
}

void	push_back_a(t_stack **stk_a, t_stack **stk_b)
{
	int	max;
	int	len;

	while (*stk_b != NULL)
	{
		max = find_max(stk_b);
		len = len_stack(stk_b);
		if (max == 0)
			pa(stk_a, stk_b);
		else if (max <= len / 2)
		{
			while (find_max(stk_b) != 0)
				rb(stk_b);
		}
		else
		{
			while (find_max(stk_b) != 0)
				rrb(stk_b);
		}
	}
}

void	big_sort(t_stack **stk_a, t_stack **stk_b, int size)
{
	int	arr_end;
	int	*arr;

	arr = malloc(sizeof(int) * size);
	if (!arr)
		return ;
	fill_arr(stk_a, arr);
	sort_in_table(arr, size);
	if (size <= 100)
		arr_end = size / 6;
	else
		arr_end = size / 14;
	push_to_b(stk_a, stk_b, arr, arr_end);
	free(arr);
	push_back_a(stk_a, stk_b);
}
