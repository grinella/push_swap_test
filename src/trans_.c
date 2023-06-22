/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trans_.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 14:50:25 by grinella          #+#    #+#             */
/*   Updated: 2023/06/22 19:14:12 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

static int	check_ripetuti(int num, t_stack **stack_a)
{	
	t_stack	*tmp;

	if (!*stack_a)
		return (0);
	tmp = *stack_a;
	while (tmp->next != *stack_a)
	{
		if (num == tmp->value)
			return (1);
			tmp = tmp->next;
	}
	if (num == tmp->value)
		return (1);
	return (0);
}

void	trans_row(char *s, t_stack **stack_a)
{
	char	**mat;
	int		i;

	mat = ft_split(s, ' ');
	i = -1;
	while (mat[++i])
	{
		if (check_ripetuti(ft_atol(mat[i]), stack_a) == 1)
		{
			err_rip(stack_a);
			exit (2);
		}
		new_element(stack_a, ft_atol(mat[i]));
	}
	free_mat(mat);
}

void	trans_av(char **av, t_stack **stack_a)
{
	int	i;

	i = 0;
	while (av[++i])
		trans_row(av[i], stack_a);
}
