/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:36:54 by husarpka          #+#    #+#             */
/*   Updated: 2025/03/04 11:36:55 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

long int	ft_atoi(char *str)
{
	int			i;
	int			a;
	long int	result;

	a = 1;
	i = 0;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	if ((str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
		{
			a *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i] - '0') + (result * 10);
		i++;
	}
	return (a * result);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (i < (dstsize -1) && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (0);
}

static int	ft_count_words(const char *str, char sep)
{
	int	word;

	word = 0;
	while (*str)
	{
		if (*str == sep)
			str++;
		else
		{
			word++;
			while (*str && *str != sep)
				str++;
		}
	}
	return (word);
}

static int	ft_count_len(const char *str, char sep)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != sep)
	{
		i++;
	}
	return (i);
}

char	**ft_split(char *s, char c)
{
	char	**ptr;
	int		i;

	i = 0;
	if (!s || s[i] == '\0')
		return (NULL);
	ptr = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (ft_error_split(), NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			ptr[i] = (char *)malloc((ft_count_len(s, c) + 1) * sizeof(char));
			if (!ptr[i])
				return (ft_error_split(), ft_free_memory(ptr));
			ft_strlcpy(ptr[i], s, ft_count_len(s, c) + 1);
			s += ft_count_len(s, c);
			i++;
		}
	}
	ptr[i] = NULL;
	return (ptr);
}
