/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:14:36 by grinella          #+#    #+#             */
/*   Updated: 2023/06/26 15:04:09 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

t_stack	*r_(t_stack **stack, char c)
{
	if (*stack == NULL || (*stack)->next == *stack)
		return (*stack);
	*stack = (*stack)->next;
	if (c == 1)
		write(1, "ra\n", 4);
	else if (c == 2)
		write(1, "rb\n", 4);
	return (*stack);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	*stack_a = r_(stack_a, 0);
	*stack_b = r_(stack_b, 0);
	write (1, "rr\n", 3);
}

t_stack	**rr_(t_stack **stack, char c)
{
	t_stack	*tmp;

	if (*stack == NULL || (*stack)->next == *stack)
		return (stack);
	tmp = get_last_node(*stack);
	*stack = tmp;
	if (c == 1)
		write(1, "rra\n", 4);
	else if (c == 2)
		write(1, "rrb\n", 4);
	return (stack);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	stack_a = rr_(stack_a, 0);
	stack_b = rr_(stack_b, 0);
	write (1, "rrr\n", 4);
}
