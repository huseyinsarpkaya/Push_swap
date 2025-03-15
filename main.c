/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:36:28 by husarpka          #+#    #+#             */
/*   Updated: 2025/03/04 17:35:19 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_size_sort(t_data *stack)
{
	if (stack->size_a <= 3)
	{
		ft_three_sort_a(stack);
		return ;
	}
	if (stack->size_a == 4)
	{
		sort_four(stack, stack->size_a);
		return ;
	}
	if (stack->size_a == 5)
	{
		sort_five(stack, stack->size_a);
		return ;
	}
	bubble_sort(stack);
	ft_number_sort(stack);
	stack->max_bit = ft_bit_control(stack);
	ft_radixsort(stack);
	return ;
}

void	ft_control_argv(t_data *stack, char **argv)
{
	int			i;
	long int	value;

	i = 0;
	if (ft_is_number(argv) == 1)
		ft_error_stack(stack);
	while (argv[i])
	{
		value = ft_atoi(argv[i]);
		if (value == 0 && argv[i][0] == '-')
			ft_error_stack(stack);
		if (value > INT_MAX || value < INT_MIN)
			ft_error_stack(stack);
		else
			stack->a[i] = value;
		i++;
	}
	if (ft_even_control(stack) == 1)
		ft_error_stack(stack);
	if (ft_order_control(stack))
		return ;
	ft_size_sort(stack);
	return ;
}

void	ft_memory(char **argv, int is_argv)
{
	t_data	stack;

	if (is_argv == 1)
		stack.value = argv;
	else
		stack.value = NULL;
	stack.size_a = ft_strlen_2d(argv);
	stack.a = malloc(sizeof(int) * stack.size_a);
	if (!stack.a)
		ft_error_stack(&stack);
	stack.b = malloc(sizeof(int) * stack.size_a);
	if (!stack.b)
		ft_error_stack(&stack);
	stack.clone_a = malloc(sizeof(int) * stack.size_a);
	if (!stack.clone_a)
		ft_error_stack(&stack);
	stack.clone_a_index = malloc(sizeof(int) * stack.size_a);
	if (!stack.clone_a_index)
		ft_error_stack(&stack);
	stack.size_b = 0;
	ft_control_argv(&stack, argv);
	ft_free_stack(&stack);
	return ;
}

int	main(int argc, char **argv)
{
	char	**value;

	if (argc > 1)
	{
		if (argc == 2)
		{
			if (ft_space_control(argv[1]))
			{
				write(1, "Error\n", 6);
				return (0);
			}
			value = ft_split(argv[1], 32);
			if (!value)
				return (0);
			ft_memory(value, 1);
			ft_free_memory(value);
		}
		else
		{
			argv++;
			ft_memory(argv, 0);
		}
	}
	return (0);
}
