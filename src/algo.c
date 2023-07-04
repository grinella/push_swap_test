/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:15:07 by grinella          #+#    #+#             */
/*   Updated: 2023/07/04 17:28:34 by grinella         ###   ########.fr       */
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

void	five_h(t_stack **stack_x, t_stack **stack_y)
{
	t_stack	*fnl_h;
	int		i;
	int		j;
	int		t;
	int		k;

	i = (ftn(stack_x));
	t = 3;
	// printf ("%d\n", (ftn(stack_x) - 3));
	while (t < i)
	{
		p_(stack_x, stack_y, 2);
		t++;
	}
	tre_numeri(stack_x);
	while (*stack_y)
	{
		if (*stack_x < *stack_y)
			r_(stack_x, 1);
		while (*stack_x > *stack_y)
		{
			if ((find_succ(stack_y, stack_x) > (ftn(stack_x)) / 2))
			{
				j = (ftn(stack_x) - find_succ(stack_y, stack_x) + 1);
				while (j != 0)
				{
					rr_(stack_x, 2);
					j--;
				}
			}
			else if (find_succ(stack_y, stack_x) < (ftn(stack_x)) / 2)
			{
				j = ((find_succ(stack_y, stack_x) - 1));
				while (j != 0)
				{
					r_(stack_x, 1);
					j--;
				}
			}
			p_(stack_y, stack_x, 1);
		}
	}
	fnl_h = *stack_x;
	if (fnl_h->value != find_min(stack_x))
	{
		if ((find_pos_min(stack_x) > (ftn(stack_x)) / 2))
		{
			k = (ftn(stack_x) - find_pos_min(stack_x) + 1);
			while (k != 0)
			{
				rr_(stack_x, 2);
				k--;
			}
		}
		else if (find_pos_min(stack_x) < (ftn(stack_x)) / 2)
		{
			k = (find_pos_min(stack_x) - 1);
			while (k != 0)
			{
				r_(stack_x, 1);
				k--;
			}
		}
	}
	return ;
}

// void	push()