/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:18:30 by grinella          #+#    #+#             */
/*   Updated: 2023/07/05 16:32:51 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	new_element(t_stack **stack, int value)
{
	t_stack	*new_node;
	t_stack	*last_node;

	new_node = create_node(value);
	if (new_node == NULL)
		return ;
	if (*stack == NULL)
	{
		new_node->next = new_node;
		*stack = new_node;
	}
	else
	{
		new_node->next = (*stack);
		last_node = get_last_node(*stack);
		last_node->next = new_node;
	}
}

// t_stack	*get_last_node(t_stack *stack)
// {
// 	t_stack	*first_node;

// 	first_node = stack;
// 	if (stack == NULL)
// 		return (NULL);
// 	while (stack->next != first_node)
// 		stack = stack->next;
// 	if (stack->next != first_node)
// 	{
// 		// La lista non è circolare
// 		// Gestisci l'errore o restituisci NULL
// 		return (NULL);
// 	}
// 	return (stack);
// }

t_stack	*get_last_node(t_stack *stack)
{
	t_stack	*first_node;
	printf("check value : %d", stack->value);
	first_node = stack;
	if (stack == NULL)
		return (NULL);
	printf("GLS\n");
	while (stack->next != first_node)
	{
		printf("Values: %d\n", stack->value);
		stack = stack->next;
	}
	printf("Values: %d\n", stack->value);
	return (stack);
}

t_stack	*create_node(int value)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	if (new_node == NULL)
		return (NULL);
	new_node->value = value;
	new_node->next = NULL;
	return (new_node);
}
