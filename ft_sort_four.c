/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_four.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:27:30 by husarpka          #+#    #+#             */
/*   Updated: 2025/03/14 15:55:50 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

int	ft_sort_four_2(t_data	*stack, int pivot)
{
	int	len;

	len = stack->size_a;
	while (len >= 3)
	{
		if (stack->a[0] <= pivot)
		{
			pb(stack);
			len--;
		}
		else
			ra(stack);
	}
	if (stack->a[0] > stack->a[1])
		sa(stack);
	if (stack->b[0] < stack->b[1])
		sb(stack);
	pa(stack);
	pa(stack);
	return (0);
}

int	sort_four(t_data *stack, int len)
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
	pivot = res[1];
	free(res);
	ft_sort_four_2(stack, pivot);
	return (0);
}
