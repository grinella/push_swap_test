/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:04:55 by grinella          #+#    #+#             */
/*   Updated: 2023/07/04 17:22:19 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack	*stack2;
	t_stack	*last;
	t_stack	*tmp;

	stack2 = *stack;
	last = get_last_node(*stack);
	while (stack2 != last)
	{
		tmp = stack2->next;
		free(stack2);
		stack2 = tmp;
	}
	free(last);
}

void	err_rip(t_stack **stack_a)
{
	free_stack(stack_a);
	write(2, "Error\n", 7);
	free(stack_a);
}
