/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:06:22 by grinella          #+#    #+#             */
/*   Updated: 2023/07/07 20:15:35 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

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
	// printf ("%d\n", i);
	return (i);
}

int	find_pos_min(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*min;	
	int		i;
	int		j;

	i = 1;
	j = 1;
	min = *stack;
	tmp = min->next;
	while (tmp->value > min->value)
	{
		tmp = tmp->next;
		i++;
	}
	while (tmp->value < min->value)
	{
		min = tmp;
		tmp = tmp->next;
		j = i;
		i++;
	}
	printf("%d\n", i);
	return (i);
}

int	find_min(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*min;	

	min = *stack;
	tmp = min->next;
	while (tmp->value > min->value)
		tmp = tmp->next;
	while (tmp->value < min->value)
	{
		min = tmp;
		tmp = tmp->next;
	}
	return (min->value);
}

//trova successivo
int	find_pos_succ(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack	*b;
	int		i;
	int		t;

	tmp = *stack_a;
	b = *stack_b;
	i = find_pos_min(stack_a);
	t = 1;
	printf("find_succ\n");
	while (t != i)
	{
		tmp = tmp->next;
		t++;
	}
	if (t == i)
	{
		while (tmp->value < b->value)
		{
			printf("tmp->value < b->value %d\n", i);
			tmp = tmp->next;
			if (t == ftn(stack_a))
				t = 0;
			t++;
		}	
		if (tmp->value > b->value)
		{
			printf("successivo = %d\n", i);
			sleep(1);
			return (t);
		}
		return (t);
	}
	return (t);
}
