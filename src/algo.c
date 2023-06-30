/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:15:07 by grinella          #+#    #+#             */
/*   Updated: 2023/06/30 18:56:07 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	tre_numeri(t_stack **stack)
{
	t_stack	*a;
	t_stack	*b;
	t_stack	*c;

	a = (*stack);
	b = a->next;
	c = b->next;
	if (!(a->value < b->value && b->value < c->value))
	{
		if ((a->value < b->value && b->value > c->value && c->value > a->value)
			|| (a->value > b->value && b->value < c->value
				&& c->value > a->value)
			|| (a->value > b->value && b->value > c->value))
			s_(stack, 1);
		if (a->value < b->value && b->value > c->value && c->value < a->value)
			rr_(stack, 1);
		else if (a->value > b->value && b->value < c->value
			&& c->value < a->value)
			r_(stack, 1);
	}
}

//find tot num:
int	ftn(t_stack **stack)
{
	check_order(&stack_a);
	t_stack	*tmp;
	int		i;

	tmp = *stack;
	i = 1;
	while (tmp->next != *stack)
	{
		tmp = tmp->next;
		i++;
	}
	printf ("%d\n", i);
	return (i);
}

void	five_h(t_stack **stack_x, t_stack **stack_y)
{
	ftn(stack_a)
}
