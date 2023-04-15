/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 22:10:15 by ckarakus          #+#    #+#             */
/*   Updated: 2023/04/15 22:13:28 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstunique(t_stack *stack)
{
	t_stack	*tmp;
	int		count;

	if (!stack)
		return (0);
	count = 1;
	tmp = stack;
	while (tmp->next != NULL)
	{
		if (tmp->value != tmp->next->value)
			count++;
		tmp = tmp->next;
	}
	return (count);
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
