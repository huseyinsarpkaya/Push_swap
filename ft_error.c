/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 13:38:23 by husarpka          #+#    #+#             */
/*   Updated: 2025/03/09 13:38:23 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>
#include <stdlib.h>

void	ft_error_stack(t_data *stack)
{
	write(1, "Error\n", 6);
	ft_free_stack(stack);
	if (stack->value)
		ft_free_memory(stack->value);
	exit(0);
}

int	ft_strlen_2d(char **argv)
{
	int	i;
	int	a;

	a = 0;
	i = 0;
	while (argv[a])
	{
		i++;
		a++;
	}
	return (i);
}

int	ft_error_split(void)
{
	write(1, "Error\n", 6);
	return (1);
}
