/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 23:15:10 by ckarakus          #+#    #+#             */
/*   Updated: 2023/04/16 04:44:44 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	sort_3(t_stack **stack_a)
{
	if ((*stack_a)->value > (*stack_a)->next->value
		&& (*stack_a)->value < last_node(*stack_a)->value)
		sa(stack_a);
	else if ((*stack_a)->value > (*stack_a)->next->value
		&& (*stack_a)->value > last_node(*stack_a)->value
		&& (*stack_a)->next->value > last_node(*stack_a)->value)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if ((*stack_a)->value > (*stack_a)->next->value
		&& (*stack_a)->value > last_node(*stack_a)->value
		&& (*stack_a)->next->value < last_node(*stack_a)->value)
		ra(stack_a);
	else if ((*stack_a)->value < (*stack_a)->next->value
		&& (*stack_a)->value < last_node(*stack_a)->value)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if ((*stack_a)->value < (*stack_a)->next->value
		&& (*stack_a)->value > last_node(*stack_a)->value)
		rra(stack_a);
}

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	(void)stack_b;
	if (ft_lstsize(*stack_a) == 2
		&& (*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a);
	else if (ft_lstsize(*stack_a) == 3)
		sort_3(stack_a);
}
