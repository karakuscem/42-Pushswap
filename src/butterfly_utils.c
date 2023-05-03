/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   butterfly_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 03:45:38 by ckarakus          #+#    #+#             */
/*   Updated: 2023/05/03 18:50:52 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	optimaizer(int size)
{
	int	sqrt;
	int	log;

	sqrt = 1;
	log = 0;
	while (sqrt < size / sqrt)
		sqrt++;
	while (size)
	{
		size /= 2;
		log++;
	}
	return (sqrt + log - 1);
}

int	get_to_top(t_stack **stack, t_stack *node)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = *stack;
	while ((*stack)->value != node->value)
	{
		*stack = (*stack)->next;
		i++;
	}
	*stack = tmp;
	return (i);
}

void	shortest_way(t_stack **stack_b, t_stack *node)
{
	int		size;

	size = ft_lstsize(*stack_b);
	if (get_to_top(stack_b, node) > size / 2)
		while ((*stack_b)->value != node->value)
			rrb(stack_b);
	else
		while ((*stack_b)->value != node->value)
			rb(stack_b);
}

void	find_max_node(t_stack **stack)
{
	t_stack	*tmp;
	int		max;

	tmp = *stack;
	max = tmp->value;
	while (*stack)
	{
		if ((*stack)->value > max)
			max = (*stack)->value;
		*stack = (*stack)->next;
	}
	*stack = tmp;
	while (tmp->value != max)
		tmp = tmp->next;
	shortest_way(stack, tmp);
}

void	effective_pushing(t_stack **a, t_stack **b, int *i, int op)
{
	if ((*a)->index <= *i)
	{
		pb(a, b);
		rb(b);
		(*i)++;
	}
	else if ((*a)->index > *i && (*a)->index <= *i + op)
	{
		pb(a, b);
		(*i)++;
	}
	else
		ra(a);
}
