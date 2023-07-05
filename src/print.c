/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:05:11 by grinella          #+#    #+#             */
/*   Updated: 2023/07/05 16:11:03 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	print_stack(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	if (*stack != NULL)
	{
		while (tmp->next != *stack)
		{
			ft_putnbr_fd(tmp->value, 1);
			// ft_putchar_fd('\n', 1);
			write(1, ", ", 2);
			tmp = tmp->next;
		}
		ft_putnbr_fd(tmp->value, 1);
		ft_putchar_fd('\n', 1);
	}
}

// void	print_stack(t_stack **stack)
// {
// 	t_stack	*temp;
// 	int		i;

// 	temp = *stack;
// 	i = 0;
// 	ftn(stack) = ft_len_stack(stack);
// 	write(1, "\n-------------\n      A      \n-------------\n", 43);
// 	while (i < stack->size && temp != NULL)
// 	{
// 		ft_printf("      %d\n", temp->value);
// 		temp = temp->next;
// 		i++;
// 	}
// }
