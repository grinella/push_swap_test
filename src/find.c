/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:06:22 by grinella          #+#    #+#             */
/*   Updated: 2023/07/04 16:54:27 by grinella         ###   ########.fr       */
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

	i = 0;
	j = 0;
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
int	find_succ(t_stack **stack_b, t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*b;
	int		i;

	tmp = *stack_a;
	b = *stack_b;
	i = 1;
	while (tmp->value != find_min(stack_a))
	{
		tmp = tmp->next;
		i++;
	}
	while (i < ftn(stack_a))
	{
		if (i >= ftn(stack_a))
			i = 0;
		while (tmp->value > b->value)
		{	
			tmp = tmp->next;
			i++;
		}
		// printf ("successivo %d\n", tmp->value);
	}
	return (i);
}
