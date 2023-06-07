/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 12:20:07 by grinella          #+#    #+#             */
/*   Updated: 2023/05/19 12:23:44 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

t_stack	*ft_lstpop(t_stack **stack)
{
	t_stack	*node;

	if (*stack == NULL)
		return (NULL);
	node = *stack;
	*stack = (*stack)->next;
	node->next = NULL;
	return (node);
}
