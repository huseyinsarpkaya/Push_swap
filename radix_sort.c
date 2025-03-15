/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 13:38:37 by husarpka          #+#    #+#             */
/*   Updated: 2025/03/09 13:38:37 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_radix_b(t_data	*stack, int i, int b_size, int max_bit)
{
	while (b_size-- && i <= max_bit)
	{
		if (((stack->b[0] >> i) & 1) == 0)
			rb(stack);
		else
			pa(stack);
	}
	return ;
}

int	ft_radix_a(t_data *stack, int i)
{
	if (ft_order_control(stack))
		return (1);
	else
	{
		if (((stack->a[0] >> i) & 1) == 0)
			pb(stack);
		else
			ra(stack);
	}
	return (1);
}

int	ft_radixsort(t_data *stack)
{
	int	i;
	int	j;
	int	size;
	int	b_size;

	i = 0;
	j = 0;
	while (i <= stack->max_bit)
	{
		j = 0;
		size = stack->size_a;
		while (j < size)
		{
			ft_radix_a(stack, i);
			j++;
		}
		i++;
		b_size = stack->size_b;
		ft_radix_b(stack, i, b_size, stack->max_bit);
	}
	while (stack->size_b)
		pa(stack);
	return (0);
}
