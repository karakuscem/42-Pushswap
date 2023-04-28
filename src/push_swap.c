/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 21:38:18 by ckarakus          #+#    #+#             */
/*   Updated: 2023/04/28 03:46:57 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"				

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_stack *current; // Just for printing

	if (argc < 2)
		ft_error("Error");
	stack_a = NULL;
	stack_b = NULL;
	fill_stack(&stack_a, argc, argv);
	if (!ft_lstunique(stack_a))
	{
		ft_lstclear(&stack_a);
		ft_lstclear(&stack_b);
		ft_error("Error");
	}
	sort(&stack_a, &stack_b);
	current = stack_a;
	while (current != NULL)
	{
		printf("%d ", current->value);
		current = current->next;
	}
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	return (0);
}
