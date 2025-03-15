/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_memory.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 13:38:20 by husarpka          #+#    #+#             */
/*   Updated: 2025/03/09 13:38:20 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

char	**ft_free_memory(char **str)
{
	char	**ptr;

	ptr = str;
	while (*ptr)
	{
		free(*ptr);
		ptr++;
	}
	free(str);
	return (NULL);
}

void	ft_free_stack(t_data	*stack)
{
	if (stack == NULL)
		return ;
	if (stack->a != NULL)
	{
		free(stack->a);
		stack->a = NULL;
	}
	if (stack->b != NULL)
	{
		free(stack->b);
		stack->b = NULL;
	}
	if (stack->clone_a != NULL)
	{
		free(stack->clone_a);
		stack->clone_a = NULL;
	}
	if (stack->clone_a_index != NULL)
	{
		free(stack->clone_a_index);
		stack->clone_a_index = NULL;
	}
	return ;
}
