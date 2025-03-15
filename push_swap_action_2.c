/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_action_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:12:13 by husarpka          #+#    #+#             */
/*   Updated: 2025/03/14 15:56:26 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	sa(t_data	*stack)
{
	int	tmp;

	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	write(1, "sa\n", 3);
	return ;
}

void	rra(t_data	*stack)
{
	int	i;
	int	temp;

	temp = stack->a[stack->size_a -1];
	i = stack->size_a - 1;
	while (i > 0)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[i] = temp;
	write(1, "rra\n", 4);
	return ;
}

void	sb(t_data	*stack)
{
	int	tmp;

	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
	write(1, "sb\n", 3);
	return ;
}

void	rb(t_data	*stack)
{
	int	tmp;
	int	index;

	index = 0;
	tmp = stack->b[index];
	index++;
	while (index < stack->size_b)
	{
		stack->b[index - 1] = stack->b[index];
		index++;
	}
	stack->b[stack->size_b - 1] = tmp;
	write(1, "rb\n", 3);
	return ;
}
