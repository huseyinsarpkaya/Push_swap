/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:21:11 by husarpka          #+#    #+#             */
/*   Updated: 2025/03/14 15:55:38 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

int	ft_mini_sort(int *result, int len)
{
	int	swap;
	int	i;
	int	j;

	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (result[i] > result[j])
			{
				swap = result[i];
				result[i] = result[j];
				result[j] = swap;
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_sort_five_2(t_data *stack, int pivot)
{
	int	len;

	len = stack->size_a;
	while (len > 3)
	{
		if (stack->a[0] < pivot)
		{
			pb(stack);
			len--;
		}
		else
			ra(stack);
	}
	ft_three_sort_a(stack);
	if (stack->b[0] < stack->b[1])
		sb(stack);
	pa(stack);
	pa(stack);
	return (0);
}

int	sort_five(t_data *stack, int len)
{
	int	i;
	int	*res;
	int	pivot;
	int	count;

	count = len;
	i = 0;
	res = malloc(sizeof(int) * len);
	if (!res)
		ft_error_stack(stack);
	while (count--)
	{
		res[i] = stack->a[i];
		i++;
	}
	ft_mini_sort(res, stack->size_a);
	pivot = res[2];
	free(res);
	ft_sort_five_2(stack, pivot);
	return (0);
}
