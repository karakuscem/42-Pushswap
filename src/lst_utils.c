/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 21:55:17 by ckarakus          #+#    #+#             */
/*   Updated: 2023/04/15 22:09:47 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstnew(void *content)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->value = content;
	new_node->next = NULL;
	return (new_node);
}

void	ft_lstadd_front(t_stack **stack, t_stack *new)
{
	if (!stack || !new)
		return ;
	new->next = *stack;
	*stack = new;
}

t_stack	*last_node(t_stack *stack)
{
	t_stack	*tmp;

	if (!stack)
		return (stack);
	tmp = stack;
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}

t_stack	*before_last_node(t_stack *stack)
{
	t_stack	*tmp;

	if (!stack || !stack->next)
		return (stack);
	tmp = stack;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	return (tmp);
}

int	ft_lstsize(t_stack *stack)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = stack;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
