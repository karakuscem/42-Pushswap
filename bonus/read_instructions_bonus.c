/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_instructions_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:11:04 by ckarakus          #+#    #+#             */
/*   Updated: 2023/05/08 21:22:00 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

static int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 || *s2) && n--)
	{
		if (*s1++ != *s2++)
			return ((*(unsigned char *)--s1) - *(unsigned char *)--s2);
	}
	return (0);
}

static void	apply_instruction(char *instruction,
	t_stack **stack_a, t_stack **stack_b)
{
	if (!ft_strncmp(instruction, "sa\n", 3))
		sa(stack_a);
	else if (!ft_strncmp(instruction, "sb\n", 3))
		sb(stack_b);
	else if (!ft_strncmp(instruction, "ss\n", 3))
		ss(stack_a, stack_b);
	else if (!ft_strncmp(instruction, "pa\n", 3))
		pa(stack_a, stack_b);
	else if (!ft_strncmp(instruction, "pb\n", 3))
		pb(stack_a, stack_b);
	else if (!ft_strncmp(instruction, "ra\n", 3))
		ra(stack_a);
	else if (!ft_strncmp(instruction, "rb\n", 3))
		rb(stack_b);
	else if (!ft_strncmp(instruction, "rr\n", 3))
		rr(stack_a, stack_b);
	else if (!ft_strncmp(instruction, "rra\n", 3))
		rra(stack_a);
	else if (!ft_strncmp(instruction, "rrb\n", 3))
		rrb(stack_b);
	else if (!ft_strncmp(instruction, "rrr\n", 3))
		rrr(stack_a, stack_b);
	else
		ft_error("Error\n");
}

void	read_instructions(t_stack **stack_a, t_stack **stack_b)
{
	char	*instruction;

	instruction = get_next_line(0);
	while (instruction)
	{
		apply_instruction(instruction, stack_a, stack_b);
		free(instruction);
		instruction = get_next_line(0);
	}
	if (instruction)
		free(instruction);
	if (ft_issorted(*stack_a) && !*stack_b)
		ft_putstr("OK\n", 1);
	else
		ft_putstr("KO\n", 1);
}
