/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 21:39:03 by ckarakus          #+#    #+#             */
/*   Updated: 2023/04/16 03:23:38 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}					t_stack;


// Reverse Rotate
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);

// Rotate
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);

// Push
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);

// Swap
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);

// Utils
void	ft_putstr(char *str);
void	ft_error(char *str);
int		ft_atoi(char *str);

// Number Utils
int		ft_isnumber(char *str);
int		ft_isint(char *str);
int		ft_isdigit(int c);

// Stack Utils
t_stack	*last_node(t_stack *stack);
t_stack	*before_last_node(t_stack *stack);
void	ft_lstadd_back(t_stack **stack, t_stack *new_node);
t_stack	*ft_lstnew(int content);
int		ft_lstsize(t_stack *stack);
int		ft_lstunique(t_stack *stack);
void	ft_lstclear(t_stack **stack);
int		ft_issorted(t_stack *stack);
void	sort(t_stack **stack_a, t_stack **stack_b);
int		find_min(t_stack *stack);

#endif