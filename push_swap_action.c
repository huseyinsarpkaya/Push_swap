/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_action.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 13:38:33 by husarpka          #+#    #+#             */
/*   Updated: 2025/03/09 13:38:33 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	ra(t_data	*stack)
{
	int	tmp;
	int	index;

	index = 0;
	tmp = stack->a[index];
	index++;
	while (index < stack->size_a)
	{
		stack->a[index - 1] = stack->a[index];
		index++;
	}
	stack->a[stack->size_a - 1] = tmp;
	write(1, "ra\n", 3);
	return ;
}

void	pa(t_data	*stack)
{
	int	tmp;
	int	i;

	i = 0;
	if (stack->size_b > 0)
	{
		tmp = stack->b[0];
		while (i < stack->size_b -1)
		{
			stack->b[i] = stack->b[i + 1];
			i++;
		}
		stack->size_b--;
		i = stack->size_a;
		while (i > 0)
		{
			stack->a[i] = stack->a[i - 1];
			i--;
		}
		stack->a[0] = tmp;
		stack->size_a++;
		write(1, "pa\n", 3);
	}
	return ;
}

void	pb(t_data	*stack)
{
	int	tmp;
	int	i;

	i = 0;
	if (stack->size_a > 0)
	{
		tmp = stack->a[0];
		while (i < stack->size_a -1)
		{
			stack->a[i] = stack->a[i + 1];
			i++;
		}
		stack->size_a--;
		i = stack->size_b;
		while (i > 0)
		{
			stack->b[i] = stack->b[i - 1];
			i--;
		}
		stack->b[0] = tmp;
		stack->size_b++;
		write(1, "pb\n", 3);
	}
	return ;
}
