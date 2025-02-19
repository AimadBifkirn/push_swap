/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:21:56 by abifkirn          #+#    #+#             */
/*   Updated: 2025/02/06 13:26:50 by abifkirn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_node(t_stack **stack, int num)
{
	t_stack	*tmp;
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return ;
	node->num = num;
	node->next = NULL;
	if (*stack == NULL)
	{
		*stack = node;
		return ;
	}
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = node;
}

void	add_list(char **table, t_stack **stack_a)
{
	int		i;
	long	num;

	i = 0;
	while (table[i])
	{
		num = ft_atoi(table[i]);
		if (check_num(table[i]) == NULL || num > INT_MAX || num < INT_MIN)
		{
			free_list(*stack_a);
			free_table(table);
			write (2, "Error\n", 6);
			exit (-1);
		}
		add_node(stack_a, num);
		i++;
	}
}

void	free_list(t_stack *stack_a)
{
	t_stack	*tmp;

	while (stack_a)
	{
		tmp = stack_a;
		stack_a = stack_a->next;
		free(tmp);
	}
	stack_a = NULL;
}

int	argument_handel(int ac, char **av, t_stack **stack_a)
{
	int		i;
	int		j;
	char	**table;

	i = 1;
	while (i < ac)
	{
		j = 0;
		table = ft_split(av[i], ' ');
		if (!table || !table[0])
		{
			if (table)
				free (table);
			free_list(*stack_a);
			return (1);
		}
		add_list(table, stack_a);
		while (table[j])
			free(table[j++]);
		free(table);
		table = NULL;
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	int		len;

	stack_a = NULL;
	if (ac < 2)
		return (0);
	if (argument_handel(ac, av, &stack_a))
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	doubles_check(&stack_a);
	if (sorted_check(&stack_a))
	{
		len = len_stack(&stack_a);
		sort_stack(&stack_a, len);
	}
	free_list(stack_a);
	return (0);
}
