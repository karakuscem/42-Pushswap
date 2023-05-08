/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_action_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:53:45 by ckarakus          #+#    #+#             */
/*   Updated: 2023/05/08 21:22:07 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

static void	rotate(t_stack **stack)
{
	t_stack	*tmp_first;
	t_stack	*tmp_second;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	tmp_first = *stack;
	tmp_second = (*stack)->next;
	*stack = last_node(*stack);
	(*stack)->next = tmp_first;
	tmp_first->next = NULL;
	*stack = tmp_second;
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
