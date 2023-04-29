/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_action_bonus.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:54:18 by ckarakus          #+#    #+#             */
/*   Updated: 2023/04/29 16:54:29 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

static void	reverse_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*last;
	t_stack	*before_last;

	last = last_node(*stack);
	before_last = before_last_node(*stack);
	tmp = *stack;
	*stack = last;
	(*stack)->next = tmp;
	before_last->next = NULL;
}

void	rra(t_stack **stack_a)
{
	reverse_rotate(stack_a);
}

void	rrb(t_stack **stack_b)
{
	reverse_rotate(stack_b);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
}
