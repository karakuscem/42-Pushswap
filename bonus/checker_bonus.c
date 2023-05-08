/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 04:42:23 by ckarakus          #+#    #+#             */
/*   Updated: 2023/05/08 22:41:08 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

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
	read_instructions(&stack_a, &stack_b);
	ft_lstclear(&stack_a);
	return (0);
}
