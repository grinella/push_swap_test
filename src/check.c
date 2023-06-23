/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:25:34 by grinella          #+#    #+#             */
/*   Updated: 2023/06/22 17:14:59 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	check_mat(char **av)
{
	int	i;
	int	j;

	i = -1;
	while (av[++i])
	{
		j = -1;
		if (av[i][0] == '-' || av[i][0] == '+')
			j++;
		while (av[i][++j])
		{
			if (av[i][j] < '0' || av[i][j] > '9')
				return (1);
		}
	}	
	return (0);
}

void	check(int ac, char **av)
{
	int		i;
	char	**mat;

	i = 0;
	if (ac < 2)
		exit (0);
	while (av[++i])
	{
		mat = ft_split(av[i], ' ');
		if (check_mat(mat))
		{
			write(1, "Error\n", 6);
			exit (1);
		}
		free_mat(mat);
	}	
}