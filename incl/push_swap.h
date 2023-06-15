/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:37:51 by grinella          #+#    #+#             */
/*   Updated: 2023/06/15 14:58:19 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
// # include <string.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

void	print_number(t_stack *stack);
void	new_element(t_stack **stack, int value);
t_stack	*create_node(int value);
t_stack	*ft_lstpop(t_stack **stack);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *str);
void	print_stack(t_stack *stack);
t_stack	*get_last_node(t_stack *stack);
void	p_(t_stack **stack_from, t_stack **stack_to, char c);
t_stack	*s_(t_stack *stack, char c);
void	ss(t_stack **stack_a, t_stack **stack_b);
t_stack	*r_(t_stack **stack, char c);
void	rr(t_stack **stack_a, t_stack **stack_b);
t_stack	**rr_(t_stack **stack, char c);
void	rrr(t_stack **stack_a, t_stack **stack_b);
void	three_nmbrs(t_stack *stack);
t_stack	*ft_stack_new(int value);
int		ft_atol(char *str);
char	**ft_split(char const *s, char c);

#endif
