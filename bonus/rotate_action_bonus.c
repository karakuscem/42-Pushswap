/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_action_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:53:45 by ckarakus          #+#    #+#             */
/*   Updated: 2023/04/29 16:54:00 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

static void	rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*last;

	last = last_node(*stack);
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = NULL;
	last->next = tmp;
}

void	ra(t_stack **stack_a)
{
	rotate(stack_a);
}

void	rb(t_stack **stack_b)
{
	rotate(stack_b);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}
