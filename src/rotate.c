/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:14:36 by grinella          #+#    #+#             */
/*   Updated: 2023/06/07 15:43:00 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

t_stack	*r_(t_stack **stack, char c)
{
	if (*stack == NULL || (*stack)->next == *stack)
		return (*stack);
	*stack = (*stack)->next;
	if (c == 'a')
		ft_putstr_fd("ra\n", 1);
	else if (c == 'b')
		ft_putstr_fd("rb\n", 1);
	return (*stack);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	*stack_a = r_(stack_a, 0);
	*stack_b = r_(stack_b, 0);
	ft_putstr_fd("rr\n", 1);
}

t_stack	**rr_(t_stack **stack, char c)
{
	t_stack	*tmp;

	if (*stack == NULL || (*stack)->next == *stack)
		return (stack);
	tmp = get_last_node(*stack);
	*stack = tmp;
	printf("tmp %d\n", tmp->value);
	if (c == 'a')
		ft_putstr_fd("rra\n", 1);
	else if (c == 'b')
		ft_putstr_fd("rrb\n", 1);
	return (stack);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	stack_a = rr_(stack_a, 0);
	stack_b = rr_(stack_b, 0);
	ft_putstr_fd("rrr\n", 1);
}
