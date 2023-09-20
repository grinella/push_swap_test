/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:46:41 by grinella          #+#    #+#             */
/*   Updated: 2023/09/13 18:18:42 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	is_circular_list(t_stack *head)
{
	t_stack	*tortoise;
	t_stack	*hare;

	tortoise = head;
	hare = head->next;
	if (head == NULL)
	{
		printf("head == NULL\n");
		return (0);
	}
	while (hare != NULL && hare->next != NULL)
	{
		if (tortoise == hare)
		{
			printf("tortoise == hare\n");
			return (1);
		}
		tortoise = tortoise->next;
		hare = hare->next->next;
	}
	sleep(2);
	return (0);
}

int	main(int ac, char **av)
{
	t_push_swap	push_swap;

	push_swap.stack_a = malloc(sizeof(t_stack));
	push_swap.stack_a = NULL;
	check(ac, av);
	trans_av(av, &push_swap.stack_a);
	push_swap.stack_b = malloc(sizeof(t_stack));
	push_swap.stack_b = NULL;
	is_circular_list(push_swap.stack_a);
	print_stack(&push_swap.stack_a);
	p_(&push_swap.stack_a, &push_swap.stack_b, 2);
	p_(&push_swap.stack_b, &push_swap.stack_a, 1);
	printf("stack a:\n");
	print_stack(&push_swap.stack_a);
	printf("stack b:\n");
	print_stack(&push_swap.stack_b);
	if (check_order(&push_swap.stack_a) == 1)
	{
		printf("stack a:\n");
		print_stack(&push_swap.stack_a);
		printf("stack b:\n");
		print_stack(&push_swap.stack_b);
		free_total_a(&push_swap.stack_a);
		free_total_b(&push_swap.stack_b);
	}
	return (0);
}

// int	main(int ac, char **av)
// {
// 	t_push_swap	push_swap;

// 	// t_stack	*stack_a;
// 	// t_stack	*stack_b;
// 	push_swap.stack_a = malloc(sizeof(t_stack));
// 	// stack_a = NULL;
// 	push_swap.stack_a = NULL;
// 	check(ac, av);
// 	trans_av(av, &push_swap.stack_a);
// 	push_swap.stack_b = malloc(sizeof(t_stack));
// 	// stack_b = NULL;
// 	push_swap.stack_b = NULL;
// 	is_circular_list(push_swap.stack_a);
// 	print_stack(&push_swap.stack_a);
// 	// five_h(&stack_a, &stack_b);
// 	p_(&push_swap.stack_a, &push_swap.stack_b, 2);
// 	p_(&push_swap.stack_b, &push_swap.stack_a, 1);
// 	printf("stack a:\n");
// 	print_stack(&push_swap.stack_a);
// 	printf("stack b:\n");
// 	print_stack(&push_swap.stack_b);
// 	if (check_order(&push_swap.stack_a) == 1)
// 	{
// 		printf("stack a:\n");
// 		print_stack(&push_swap.stack_a);
// 		printf("stack b:\n");
// 		print_stack(&push_swap.stack_b);
// 		free_total_a(&push_swap.stack_a);
// 		free_total_b(&push_swap.stack_b);
// 	}
// 	return (0);
// }

/*
** printa il numero di mosse fatte dal main
*/

void	print_number(t_stack **stack)
{
	t_stack	*first_node;

	first_node = *stack;
	if (!*stack)
		return ;
	while ((*stack)->next != first_node)
	{
		printf("%d ", (*stack)->value);
		*stack = (*stack)->next;
	}
	printf("%d\n", (*stack)->value);
}
