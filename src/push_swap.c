/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 21:38:18 by ckarakus          #+#    #+#             */
/*   Updated: 2023/04/15 22:12:02 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		i;

	if (argc < 2)
		ft_error("Error");
	i = 1;
	stack_a = NULL;
	stack_b = NULL;
	while (i < argc)
	{
		if (!ft_isnumber(argv[i]) || !ft_isint(argv[i]))
			ft_error("Error");
		ft_lstadd_front(&stack_a, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}
	if (ft_lstsize(stack_a) != ft_lstsize(ft_lstunique(stack_a)))
		ft_error("Error");
	ft_sort(&stack_a, &stack_b);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	return (0);
}
