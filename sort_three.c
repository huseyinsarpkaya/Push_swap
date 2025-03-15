/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 13:38:39 by husarpka          #+#    #+#             */
/*   Updated: 2025/03/09 13:38:39 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_three_sort_a(t_data *stack)
{
	if (stack->size_a <= 2 && stack->a[0] > stack->a[1])
		sa(stack);
	else if (stack->a[0] > stack->a[1]
		&& stack->a[0] < stack->a[2] && stack->a[1] < stack->a[2])
		sa(stack);
	else if (stack->a[0] < stack->a[1]
		&& stack->a[0] > stack->a[2] && stack->a[1] > stack->a[2])
		rra(stack);
	else if (stack->a[0] > stack->a[1]
		&& stack->a[0] > stack->a[2] && stack->a[1] < stack->a[2])
		ra(stack);
	else if (stack->a[0] > stack->a[1]
		&& stack->a[0] > stack->a[2] && stack->a[1] > stack->a[2])
	{
		sa(stack);
		rra(stack);
	}
	else if (stack->a[0] < stack->a[1]
		&& stack->a[0] < stack->a[2] && stack->a[1] > stack->a[2])
	{
		rra(stack);
		sa(stack);
	}
	return (1);
}
