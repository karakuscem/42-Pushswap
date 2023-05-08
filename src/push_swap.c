/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 21:38:18 by ckarakus          #+#    #+#             */
/*   Updated: 2023/05/08 20:59:20 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"				

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 2)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	fill_stack(&stack_a, argc, argv);
	if (!ft_lstunique(stack_a))
	{
		ft_lstclear(&stack_a);
		ft_error("Error\n");
	}
	if (ft_issorted(stack_a))
	{
		ft_lstclear(&stack_a);
		return (0);
	}
	index_stack(&stack_a);
	sort(&stack_a, &stack_b);
	ft_lstclear(&stack_a);
	return (0);
}
