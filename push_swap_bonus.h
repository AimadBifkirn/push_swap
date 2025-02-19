/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:26:19 by abifkirn          #+#    #+#             */
/*   Updated: 2025/02/09 15:04:37 by abifkirn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <limits.h>

char	*get_next_line(int fd);
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*get_read(int fd);
char	*get_line(char *res);
char	*reset(char *reserv);
void	*ft_memcpy(char *dst, char *src, size_t n);
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
size_t	ft_strlen(char *s);
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
int		execute_op(t_stack **stack_a);

#endif