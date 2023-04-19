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

static void	sort_5(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	int		min;

	i = 0;
	min = find_min(*stack_a);
	while (i < 2)
	{
		if ((*stack_a)->value == min)
		{
			pb(stack_a, stack_b);
			i++;
			min = find_min(*stack_a);
		}
		else
			ra(stack_a);
	}
	sort_3(stack_a);
	if (ft_lstsize(*stack_a) == 2
		&& (*stack_b)->value < (*stack_b)->next->value)
		sa(stack_a);
	while (*stack_b)
		pa(stack_a, stack_b);
}

static void	sort_4(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	int		min;

	i = 0;
	min = find_min(*stack_a);
	while (i < 1)
	{
		if ((*stack_a)->value == min)
		{
			pb(stack_a, stack_b);
			i++;
		}
		else
			ra(stack_a);
	}
	sort_3(stack_a);
	pa(stack_a, stack_b);
}

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	(void)stack_b;
	if (ft_lstsize(*stack_a) == 2
		&& (*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a);
	else if (ft_lstsize(*stack_a) == 3)
		sort_3(stack_a);
	else if (ft_lstsize(*stack_a) == 4)
		sort_4(stack_a, stack_b);
	else if (ft_lstsize(*stack_a) == 5)
		sort_5(stack_a, stack_b);
}
