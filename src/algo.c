/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:15:07 by grinella          #+#    #+#             */
/*   Updated: 2023/07/03 15:36:45 by grinella         ###   ########.fr       */
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
	int	i;
	int	t;

	i = (ftn(stack_x) - 3);
	t = 0;
	// printf ("%d\n", ftn(stack_x) - 3);
	while (t != i)
	{
		printf("AAA\n");
		p_(stack_x, stack_y, 1);
		t++;
	}
	printf("AAB\n");
	tre_numeri(stack_x);
	while (*stack_y)
	{
		if (*stack_x < *stack_y)
			r_(stack_x, 1);
		if (*stack_x > *stack_y)
			p_(stack_y, stack_x, 2);
/*
// qui serve trovare il numero piú piccolo per poi portarlo in cima
// in base alla sua posizione si faranno x(ra o rra):
// esempio
// ftn(stack_x) = 12 e find_pos_min(stack_x) = 4
// soluzione
// visto che find_pos_min é meno della metá rispetto a 
// ftn allora faccio
// (find_pos_min - 1) volte "ra"

// esempio2
// ftn(stack_x) = 16 e find_pos_min(stack_x) = 12
// soluzione
// 12 > 8(metá di 16), quindi faró:
// (ftn - find_pos_min + 1) volte "rra"
*/
	}
	return ;
}
