/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:46:41 by grinella          #+#    #+#             */
/*   Updated: 2023/06/07 17:01:00 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		i;

	i = 1;
	stack_a = NULL;
	stack_b = NULL;
	new_element(&stack_a, 1);
	new_element(&stack_a, 2);
	new_element(&stack_a, 3);
	new_element(&stack_b, 6);
	new_element(&stack_b, 7);
	new_element(&stack_b, 8);
	printf ("stack a\n");
	print_number(stack_a);
	printf ("stack b\n");
	print_number(stack_b);
	(void) ac;
	(void) av;
	return (0);
}

/*
** fai una funzione che printa il numero di mosse fatte dal main
*/

void	print_number(t_stack *stack)
{
	t_stack	*first_node;

	first_node = stack;
	while (stack->next != first_node)
	{
		printf("%d\n", stack->value);
		stack = stack->next;
	}
	printf("%d\n", stack->value);
}
