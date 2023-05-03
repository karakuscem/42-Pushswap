/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_action_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:52:32 by ckarakus          #+#    #+#             */
/*   Updated: 2023/05/03 18:50:44 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

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
	free(tmp);
}

void	sa(t_stack **stack_a)
{
	swap(*stack_a);
}

void	sb(t_stack **stack_b)
{
	swap(*stack_b);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	swap(*stack_a);
	swap(*stack_b);
}
