/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:05:11 by grinella          #+#    #+#             */
/*   Updated: 2023/06/14 16:05:44 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	print_stack(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	if (stack != NULL)
	{
		while (tmp->next != stack)
		{
			ft_putnbr_fd(tmp->value, 1);
			ft_putchar_fd('\n', 1);
			tmp = tmp->next;
		}
		ft_putnbr_fd(tmp->value, 1);
		ft_putchar_fd('\n', 1);
	}
}