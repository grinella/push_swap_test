/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:37:51 by grinella          #+#    #+#             */
/*   Updated: 2023/07/05 15:59:26 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
// # include <string.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

void		print_number(t_stack **stack);
void		new_element(t_stack **stack, int value);
t_stack		*create_node(int value);
t_stack		*ft_lstpop(t_stack **stack);
void		ft_putchar_fd(char c, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char *s, int fd);
size_t		ft_strlen(const char *str);
void		print_stack(t_stack **stack);
t_stack		*get_last_node(t_stack *stack);
void		p_(t_stack **stack_from, t_stack **stack_to, char c);
void		s_(t_stack **stack, char c);
void		ss(t_stack **stack_a, t_stack **stack_b);
t_stack		*r_(t_stack **stack, char c);
void		rr(t_stack **stack_a, t_stack **stack_b);
t_stack		**rr_(t_stack **stack, char c);
void		rrr(t_stack **stack_a, t_stack **stack_b);
t_stack		*ft_stack_new(int value);
int			ft_atol(char *str);
char		**ft_split(char const *s, char c);
void		free_mat(char **mat);
void		trans_row(char *s, t_stack **stack_a);
void		trans_av(char **av, t_stack **stack_a);
void		err_rip(t_stack **stack_a);
void		free_stack(t_stack **stack);
void		free_mat(char **mat);
void		free_total_a(t_stack **stack_a);
void		free_total_b(t_stack **stack_b);
// static int	check_ripetuti(int num, t_stack **stack_a);
int			check_mat(char **av);
void		check(int ac, char **av);
void		tre_numeri(t_stack **stack);
int			check_order(t_stack **stack);
int			ftn(t_stack **stack);
int			find_pos_min(t_stack **stack);
int			find_min(t_stack **stack);
int			find_succ(t_stack **stack_b, t_stack **stack_a);
void		five_h(t_stack **stack_x, t_stack **stack_y);

#endif
