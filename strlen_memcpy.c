/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_memcpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abifkirn <abifkirn@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:36:56 by abifkirn          #+#    #+#             */
/*   Updated: 2025/02/09 15:04:05 by abifkirn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	*ft_memcpy(char *dst, char *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

void	free_table(char **table)
{
	int	i;

	i = 0;
	while (table[i])
	{
		free(table[i]);
		i++;
	}
	free(table);
	table = NULL;
}

int	check_len(char *arg)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (arg[i] && (arg[i] == 32 || (arg[i] >= 9 && arg[i] <= 13)))
		i++;
	if (arg[i] == '+' || arg[i] == '-')
		i++;
	while (arg[i] && arg[i] == '0')
		i++;
	while (arg[i])
	{
		i++;
		j++;
	}
	return (j);
}

char	*check_num(char *arg)
{
	int	i;

	i = 0;
	if (check_len(arg) > 11)
		return (NULL);
	if (arg[i] == '-' && !(arg[i + 1] >= '0' && arg[i + 1] <= '9'))
		return (NULL);
	else if (arg[i] == '+' && !(arg[i + 1] >= '0' && arg[i + 1] <= '9'))
		return (NULL);
	while (arg[i])
	{
		if ((arg[i] == '+' || arg[i] == '-') && i == 0)
			;
		else if (arg[i] <= '9' && arg[i] >= '0')
			;
		else
			return (NULL);
		i++;
	}
	return (arg);
}
