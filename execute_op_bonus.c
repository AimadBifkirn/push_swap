/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_op_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:41:06 by abifkirn          #+#    #+#             */
/*   Updated: 2025/02/09 14:52:16 by abifkirn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	real_execute(char	*readed, t_stack **stack_a, t_stack **stack_b)
{
	if (ft_strcmp(readed, "sa\n") == 0)
		sa(stack_a);
	else if (ft_strcmp(readed, "ra\n") == 0)
		ra(stack_a);
	else if (ft_strcmp(readed, "sb\n") == 0)
		sb(stack_b);
	else if (ft_strcmp(readed, "rb\n") == 0)
		rb(stack_b);
	else if (ft_strcmp(readed, "ss\n") == 0)
		ss(stack_a, stack_b);
	else if (ft_strcmp(readed, "rra\n") == 0)
		rra(stack_a);
	else if (ft_strcmp(readed, "rrb\n") == 0)
		rrb(stack_b);
	else if (ft_strcmp(readed, "rrr\n") == 0)
		rrr(stack_a, stack_b);
	else if (ft_strcmp(readed, "pa\n") == 0)
		pa(stack_a, stack_b);
	else if (ft_strcmp(readed, "pb\n") == 0)
		pb(stack_a, stack_b);
	else if (ft_strcmp(readed, "rr\n") == 0)
		rr(stack_a, stack_b);
	else
		return (1);
	return (0);
}

int	execute_op(t_stack **stack_a)
{
	char	*readed;
	t_stack	*stack_b;

	stack_b = NULL;
	while (1)
	{
		readed = get_next_line(0);
		if (!readed)
		{
			free_list(stack_b);
			return (0);
		}
		if (real_execute(readed, stack_a, &stack_b) == 1)
		{
			free(readed);
			free_list(stack_b);
			write (2, "Error\n", 6);
			return (1);
		}
		free(readed);
	}
	free_list(stack_b);
	return (0);
}
