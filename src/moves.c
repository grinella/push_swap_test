/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:02:59 by grinella          #+#    #+#             */
/*   Updated: 2023/07/13 17:14:29 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

// void	p_(t_stack **stack_from, t_stack **stack_to, char c)
// {
// 	t_stack	*node_to_push;

// 	node_to_push = *stack_from;
// 	if (*stack_from == NULL)
// 		return ;
// 	// Rimuovi il nodo da stack_from
// 	if (node_to_push->next == node_to_push) // Se il nodo è l'unico nella lista
// 		*stack_from = NULL;
// 	else
// 	{
// 		(*stack_from)->next->next = node_to_push->next;
// 		*stack_from = node_to_push->next;
// 	}
// 	// Aggiungi il nodo a stack_to
// 	if (*stack_to == NULL)
// 	{
// 		*stack_to = node_to_push;
// 		node_to_push->next = node_to_push; // Rende il nodo circolare
// 	}
// 	else
// 	{
// 		node_to_push->next = (*stack_to)->next;
// 		(*stack_to)->next = node_to_push;
// 	}
// 	if (c == 1)
// 		write(1, "pa\n", 3);
// 	else if (c == 2)
// 		write(1, "pb\n", 3);
// }

// Da RIVEDERE, PROBLEMI CON I NODI 
// void	p_(t_stack **stack_from, t_stack **stack_to, char c)
// {
// 	t_stack	*tmp;

// 	if (*stack_from == NULL)
// 		return ;
// 	tmp = *stack_from;
// 	get_last_node(*stack_from)->next = (*stack_from)->next;
// 	*stack_from = tmp->next;
// 	printf("PUSH\n");
// 	tmp->next = *stack_to;
// 	*stack_to = tmp;
// 	if (c == 1)
// 		write (1, "pa\n", 3);
// 	else if (c == 2)
// 		write (1, "pb\n", 3);
// }

// void	p_(t_stack **stack_from, t_stack **stack_to, char c)
// {
// 	t_stack	*tmp;

// 	if (*stack_from == NULL)
// 		return ;
// 	tmp = *stack_from;
// 	if (*stack_to)
// 	{
// 		tmp->next = *stack_to;
// 		get_last_node(*stack_to)->next = tmp;
// 		get_last_node(*stack_from)->next = (*stack_from)->next;
// 		*stack_from = tmp->next;
// 		*stack_to = tmp;
// 	}
// 	if (!(*stack_to))
// 	{
// 		*stack_to = tmp;
// 		get_last_node(*stack_from)->next = (*stack_from)->next;
// 	}
// 	printf("PUSH\n");
// 	if (c == 1)
// 		write (1, "pa\n", 3);
// 	else if (c == 2)
// 		write (1, "pb\n", 3);
// }

// UNA VOLTA CHE LO STACK DA CUI PUSHO RIMANE VUOTO COPIA TUTTI GLI GLI ELEMENTI DELLO STACK IN CUI HO PUSHATO
void	p_(t_stack **stack_from, t_stack **stack_to, char c)
{
	t_stack	*tmp_f;
	t_stack	*tmp_t;
	t_stack	*tmp;

	if (*stack_from == NULL)
		return ;
	if (*stack_to)
	{
		tmp_f = *stack_from;
		tmp_t = *stack_to;
		tmp = (*stack_from)->next;
		get_last_node(*stack_from)->next = (*stack_from)->next;
		tmp_f->next = *stack_to;
		get_last_node(*stack_to)->next = tmp_f;
		*stack_to = tmp_f;
		*stack_from = tmp;
	}
	else
	{
		tmp_f = *stack_from;
		tmp = (*stack_from)->next;
		get_last_node(*stack_from)->next = (*stack_from)->next;
		tmp_f->next = tmp_f;
		*stack_to = tmp_f;
		*stack_from = tmp;
	}
	printf("PUSH\n");
	if (c == 1)
		write (1, "pa\n", 3);
	else if (c == 2)
		write (1, "pb\n", 3);
}

void	s_(t_stack **stack, char c)
{
	t_stack	*tmp;
	int		n;

	tmp = *stack;
	n = tmp->value;
	tmp->value = tmp->next->value;
	tmp->next->value = n;
	if (c == 1)
		write (1, "sa\n", 3);
	else if (c == 2)
		write (1, "sb\n", 3);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	s_(stack_a, 0);
	s_(stack_b, 0);
	write(1, "ss\n", 3);
}
