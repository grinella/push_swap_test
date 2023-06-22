/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:35:55 by grinella          #+#    #+#             */
/*   Updated: 2023/06/22 19:16:00 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	free_total_a(t_stack **stack_a)
{
	free_stack(stack_a);
	// free(*stack_a);
}

void	free_total_b(t_stack **stack_b)
{
	free_stack(stack_b);
	// free(*stack_b);
}

void	free_mat(char **mat)
{
	int	i;

	i = -1;
	while (mat[++i])
		free(mat[i]);
	free(mat);
}
