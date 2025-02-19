/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:22:10 by abifkirn          #+#    #+#             */
/*   Updated: 2025/02/09 15:06:45 by abifkirn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct stack_ab
{
	int				num;
	struct stack_ab	*next;
}		t_stack;
void	add_node(t_stack **stack, int num);
long	ft_atoi(const char *str);
char	**ft_split(char *s, char c);
void	free_table(char **table);
char	*check_num(char *arg);
void	free_table(char **table);
void	free_list(t_stack *stack_a);
size_t	ft_strlen(const char *s);
void	*ft_memcpy(char *dst, char *src, size_t n);
void	doubles_check(t_stack **stack_a);
int		len_stack(t_stack **stack_a);
void	sort_stack(t_stack **stack_a, int len);
void	ra(t_stack **list_a);
void	rb(t_stack **list_b);
void	rr(t_stack **list_a, t_stack **list_b);
void	rra(t_stack **list_a);
void	rrb(t_stack **list_b);
void	rrr(t_stack **list_a, t_stack **list_b);
void	sa(t_stack **list_a);
void	sb(t_stack **list_b);
void	ss(t_stack **list_a, t_stack **list_b);
void	pa(t_stack **list_a, t_stack **list_b);
void	pb(t_stack **list_a, t_stack **list_b);
int		sorted_check(t_stack **stack_a);
void	big_sort(t_stack **stack_a, t_stack **stack_b, int size);
void	sort_in_table(int *table, int len);
void	fill_arr(t_stack **stack_a, int *arr);

#endif