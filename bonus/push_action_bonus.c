/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_action_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:54:47 by ckarakus          #+#    #+#             */
/*   Updated: 2023/05/08 21:21:54 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

static void	push(t_stack **first_stack, t_stack **second_stack)
{
	t_stack	*tmp;

	if (!*first_stack)
		return ;
	tmp = (*first_stack)->next;
	(*first_stack)->next = *second_stack;
	*second_stack = *first_stack;
	*first_stack = tmp;
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_b, stack_a);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
}
