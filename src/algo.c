/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:15:07 by grinella          #+#    #+#             */
/*   Updated: 2023/06/07 15:49:09 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	three_nmbrs1(t_stack *stack)
{
	if (stack->next->value > stack->value
		&& stack->next->value > stack->next->next->value)
	{
		s_(stack, 1);
		r_(&stack, 1);
	}
	else if (stack->next->next->value > stack->next->value
		&& stack->next->value > stack->value)
		rr_(&stack, 1);
	else if (stack->next->next->value > stack->value
		&& stack->value > stack->next->value)
	{
		s_(stack, 1);
		rr_(&stack, 1);
	}
	else if (stack->value > stack->next->value
		&& stack->next->value < stack->next->next->value)
	{
		s_(stack, 1);
	}
	return ;
}

void	three_nmbrs(t_stack *stack)
{
	while (stack->value > stack->next->value
		|| stack->next->value > stack->next->next->value)
	{
		printf("stack->value = %d\n", stack->value);
		if (stack->value > stack->next->value
			&& stack->next->value > stack->next->next->value)
		{
			s_(stack, 1);
			rr_(&stack, 1);
		}
		else if (stack->value < stack->next->next->value
			&& stack->next->next->value > stack->next->value)
			s_(stack, 1);
		else if (stack->next->value > stack->next->next->value
			&& stack->next->next->value > stack->value)
			r_(&stack, 1);
		else
			three_nmbrs1(stack);
		print_number(stack);
	}
}
