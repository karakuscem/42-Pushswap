/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_action.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 21:43:57 by ckarakus          #+#    #+#             */
/*   Updated: 2023/05/04 06:07:47 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	swap(t_stack *stack)
{
	t_stack	*tmp;

	if (!stack || !stack->next)
		return ;
	tmp = malloc(sizeof(t_stack));
	if (!tmp)
		return ;
	tmp->value = stack->value;
	stack->value = stack->next->value;
	stack->next->value = tmp->value;
	tmp->index = stack->index;
	stack->index = stack->next->index;
	stack->next->index = tmp->index;
	free(tmp);
}

void	sa(t_stack **stack_a)
{
	swap(*stack_a);
	ft_putstr("sa\n", 1);
}

void	sb(t_stack **stack_b)
{
	swap(*stack_b);
	ft_putstr("sb\n", 1);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	swap(*stack_a);
	swap(*stack_b);
	ft_putstr("ss\n", 1);
}
