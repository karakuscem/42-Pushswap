/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 23:15:10 by ckarakus          #+#    #+#             */
/*   Updated: 2023/05/04 07:26:03 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	sort_3(t_stack **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_a)->value;
	b = (*stack_a)->next->value;
	c = (*stack_a)->next->next->value;
	if (a > b && a < c)
		sa(stack_a);
	else if (a < b && a > c)
		rra(stack_a);
	else if (a > b && a > c && b < c)
		ra(stack_a);
	else if (a > b && a > c && b > c)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (a < b && a < c && b > c)
	{
		sa(stack_a);
		ra(stack_a);
	}
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

void	butterfly_sort(t_stack **a, t_stack **b)
{
	int	n;
	int	i;
	int	op;

	i = 0;
	n = ft_lstsize(*a);
	op = optimaizer(n);
	while (i < n)
		effective_pushing(a, b, &i, op);
	while (*b)
	{
		find_max_node(b);
		pa(a, b);
	}
}

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_lstsize(*stack_a) == 2
		&& (*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a);
	else if (ft_lstsize(*stack_a) == 3)
		sort_3(stack_a);
	else if (ft_lstsize(*stack_a) == 4)
		sort_4(stack_a, stack_b);
	else if (ft_lstsize(*stack_a) == 5)
		sort_5(stack_a, stack_b);
	else if (ft_lstsize(*stack_a) >= 13)
		butterfly_sort(stack_a, stack_b);
}
