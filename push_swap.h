/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husarpka <husarpka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:36:47 by husarpka          #+#    #+#             */
/*   Updated: 2025/03/04 15:55:47 by husarpka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_data
{
	int		size_a;
	int		size_b;
	int		*a;
	int		*b;
	int		*clone_a;
	int		*clone_a_index;
	int		max_bit;
	char	**value;
}	t_data;
int			ft_space_control(char *str);
int			sort_four(t_data *stack, int len);
int			ft_mini_sort(int *result, int len);
int			ft_is_number(char **argv);
int			sort_five(t_data *stack, int len);
int			ft_even_control(t_data *stack);
void		bubble_sort(t_data *stack);
void		ft_number_sort(t_data *stack);
int			ft_bit_control(t_data *stack);
void		ft_free_stack(t_data *stack);
char		**ft_free_memory(char **str);
char		**ft_split(char *s, char c);
long int	ft_atoi(char *str);
int			ft_order_control(t_data *stack);
int			ft_radixsort(t_data *stack);
int			ft_three_sort_a(t_data *stack);
void		ft_error_stack(t_data *stack);
int			ft_strlen_2d(char **argv);
void		sa(t_data *stack);
void		rra(t_data *stack);
void		ra(t_data *stack);
void		rb(t_data *stack);
void		pa(t_data *stack);
void		pb(t_data *stack);
void		sb(t_data	*stack);
int			ft_error_split(void);
#endif
