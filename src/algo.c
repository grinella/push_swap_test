/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:15:07 by grinella          #+#    #+#             */
/*   Updated: 2023/06/22 19:29:30 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	tre_numeri(t_stack **stack)
{
	// t_stack	*stack_a;
	t_stack	*a;
	t_stack	*b;
	t_stack	*c;

	a = (*stack);
	b = (*stack)->next;
	c = (*stack)->next->next;
	if (!(a->value < b->value && b->value < c->value))
	{
		
		printf("HERE\n");
		if ((a->value < b->value && b->value > c->value && c->value > a->value) || (a->value > b->value && b->value < c->value
				&& c->value > a->value) || (a->value > b->value && b->value > c->value))
		{
			printf("HERE 3\n");
			s_(stack, 1);
			if (a->value < b->value && b->value > c->value && c->value < a->value){
				printf("HERE 1\n");
				rr_(stack, 1);
			}
			else if (a->value > b->value && b->value < c->value && c->value < a->value){
				printf("HERE 2\n");
				r_(stack, 1);
			}
		}
	}
	return ;
}
