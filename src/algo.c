/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:15:07 by grinella          #+#    #+#             */
/*   Updated: 2023/07/07 20:39:51 by grinella         ###   ########.fr       */
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
	int		k;

	i = (ftn(stack_x));
	printf ("tot -3 = %d\n", (ftn(stack_x) - 3));
	while (i-- > 3)
		p_(stack_x, stack_y, 2);
	printf("pre tre numeri\n");
	sleep(1);
	tre_numeri(stack_x);
	printf("post tre numeri\n");
	sleep(1);
	printf("stack a:\n");
	print_stack(stack_x);
	printf("stack b:\n");
	print_stack(stack_y);
	while (*stack_y)
	{
		fnl_h = *stack_x;
		if ((find_pos_succ(stack_x, stack_y) > (ftn(stack_x)) / 2 && (ftn(stack_x)) % 2) > 0)
		{
			k = (ftn(stack_x) - find_pos_succ(stack_x, stack_y) + 1);
			printf("find_pos_succ(stack_x, stack_y) > (ftn(stack_x)) / 2\n");
			printf("cacca\n");
			printf("k = %d\n", k);
			sleep(1);
			while (k-- != 0)
				rr_(stack_x, 1);
			p_(stack_y, stack_x, 1);
			printf("stack a:\n");
			print_stack(stack_x);
			printf("stack b:\n");
			print_stack(stack_y);
			sleep(1);
		}
		else if (find_pos_min(stack_x) < (ftn(stack_x)) / 2)
		{
			k = (find_pos_min(stack_x) - 1);
			while (k-- != 0)
				r_(stack_x, 1);
			p_(stack_y, stack_x, 1);
			printf("find_pos_min(stack_x) < (ftn(stack_x)) / 2\n");
			sleep(1);
		}
	}
	while (find_pos_min(stack_x) != 1)
	{
		if (find_pos_min(stack_x) > (ftn(stack_x)) / 2)
		{
			k = (ftn(stack_x) - find_pos_min(stack_x) + 1);
			while (k-- != 0)
				rr_(stack_x, 2);
		}
		else if (find_pos_min(stack_x) < (ftn(stack_x)) / 2)
		{
			k = (find_pos_min(stack_x) - 1);
			while (k-- != 0)
				r_(stack_x, 1);
		}
	}
	return ;
}

// void	push() 

		// printf("*stack_y value = %d\n", (*stack_y)->value);
		// if (*stack_x < *stack_y)
		// 	r_(stack_x, 1);
		// while (*stack_x > *stack_y)
		// {
		// 	printf("testa stack_x > testa stack_y %d > %d\n", (*stack_x)->value,
		// 		(*stack_y)->value);
		// 	if ((find_succ(stack_x, stack_y) > (ftn(stack_x)) / 2))
		// 	{
		// 		j = (ftn(stack_x) - find_succ(stack_x, stack_y) + 1);
		// 		while (j != 0)
		// 		{
		// 			rr_(stack_x, 2);
		// 			j--;
		// 		}
		// 	}
		// 	else if (find_succ(stack_x, stack_y) < (ftn(stack_x)) / 2)
		// 	{
		// 		j = ((find_succ(stack_x, stack_y) - 1));
		// 		while (j != 0)
		// 		{
		// 			r_(stack_x, 1);
		// 			j--;
		// 		}
		// 	}
		// 	p_(stack_y, stack_x, 1);
		// }