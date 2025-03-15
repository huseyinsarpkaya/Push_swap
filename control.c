/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 13:38:17 by husarpka          #+#    #+#             */
/*   Updated: 2025/03/09 13:38:17 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_even_control(t_data *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->size_a - 1)
	{
		j = i + 1;
		while (j < stack->size_a)
		{
			if (stack->a[i] == stack->a[j])
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_bit_control(t_data	*stack)
{
	int	size;
	int	i;

	i = 0;
	size = stack->size_a;
	while (size > 1)
	{
		size /= 2;
		i++;
	}
	return (i);
}

int	ft_order_control(t_data *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->size_a - 1)
	{
		j = i + 1;
		while (j < stack->size_a)
		{
			if (stack->a[i] > stack->a[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_is_number(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] == '-' || argv[i][j] == '+') && j == 0)
				;
			else if (argv[i][j] < '0' || argv[i][j] > '9')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_space_control(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] == 32)
			i++;
		else
			return (0);
	}
	return (1);
}
