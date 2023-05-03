/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 03:45:41 by ckarakus          #+#    #+#             */
/*   Updated: 2023/05/03 18:47:41 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

static int	*make_array(t_stack *stack)
{
	int	*array;
	int	i;

	array = malloc(sizeof(int) * ft_lstsize(stack));
	i = 0;
	while (stack)
	{
		array[i] = stack->value;
		stack = stack->next;
		i++;
	}
	return (array);
}

static void	sort_array(int *array, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (array[j] > array[j + 1])
				ft_swap(&array[j], &array[j + 1]);
			j++;
		}
		i++;
	}
}

static void	find_index(t_stack **stack, int *array, int size)
{
	t_stack	*tmp;
	int		i;

	tmp = *stack;
	while (tmp)
	{
		i = 0;
		while (i < size)
		{
			if (array[i] == tmp->value)
				tmp->index = i;
			i++;
		}
		tmp = tmp->next;
	}
}

void	index_stack(t_stack **stack)
{
	int	*array;
	int	size;

	size = ft_lstsize(*stack);
	array = make_array(*stack);
	sort_array(array, size);
	find_index(stack, array, size);
	free(array);
}
