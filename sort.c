/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 13:38:44 by husarpka          #+#    #+#             */
/*   Updated: 2025/03/09 13:38:44 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubble_sort(t_data *stack)
{
	int	i;
	int	swap;
	int	len;

	i = 0;
	len = stack->size_a;
	while (i < len)
	{
		stack->clone_a[i] = stack->a[i];
		i++;
	}
	i = 0;
	while (i < len -1)
	{
		if (stack->clone_a[i] > stack->clone_a[i + 1])
		{
			swap = stack->clone_a[i];
			stack->clone_a[i] = stack->clone_a[i + 1];
			stack->clone_a[i + 1] = swap;
			i = -1;
		}
		i++;
	}
	return ;
}

void	ft_number_sort(t_data *stack)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < stack->size_a)
	{
		j = 0;
		while (j < stack->size_a)
		{
			if (stack->a[i] == stack->clone_a[j])
				stack->clone_a_index[i] = j;
			j++;
		}
		i++;
	}
	i = -1;
	while (++i < stack->size_a)
		stack->a[i] = stack->clone_a_index[i];
	return ;
}
