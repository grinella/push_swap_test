/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:46:41 by grinella          #+#    #+#             */
/*   Updated: 2023/06/15 15:02:59 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		i;

	i = 0;
	stack_a = NULL;
	stack_b = NULL;
	while (av[++i])
		new_element(&stack_a, ft_atol(av[i]));
	// print_stack(stack_a);
	print_number(stack_a);
	(void) ac;
	// (void) av;
	return (0);
}

/*
** fai una funzione che printa il numero di mosse fatte dal main
*/

void	print_number(t_stack *stack)
{
	t_stack	*first_node;

	first_node = stack;
	if (!stack)
		return ;
	while (stack->next != first_node)
	{
		printf("%d\n", stack->value);
		stack = stack->next;
	}
	printf("%d\n", stack->value);
	printf ("_ _\na b\n\n");
}
