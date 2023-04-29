/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils_2_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:23:01 by ckarakus          #+#    #+#             */
/*   Updated: 2023/04/29 17:23:08 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

int	ft_lstunique(t_stack *stack)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (!stack)
		return (1);
	tmp = stack;
	while (tmp != NULL)
	{
		tmp2 = tmp->next;
		while (tmp2 != NULL)
		{
			if (tmp->value == tmp2->value)
				return (0);
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
	return (1);
}

void	ft_lstclear(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack)
		return ;
	while (*stack != NULL)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}

int	ft_issorted(t_stack *stack)
{
	t_stack	*tmp;

	if (!stack)
		return (1);
	tmp = stack;
	while (tmp->next != NULL)
	{
		if (tmp->value > tmp->next->value)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	find_min(t_stack *stack)
{
	int min;

	min = stack->value;
	while (stack)
	{
		if (stack->value < min)
			min = stack->value;
		stack = stack->next;
	}
	return (min);
}