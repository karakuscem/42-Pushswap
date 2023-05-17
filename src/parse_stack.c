/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 03:45:32 by ckarakus          #+#    #+#             */
/*   Updated: 2023/05/17 17:51:49 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static char	**ft_split(char const *s, char c)
{
	int		len;
	int		i;
	char	**to_return;

	if (!s)
		return (NULL);
	i = 0;
	to_return = malloc(sizeof(char *) * (ft_counter(s, c) + 1));
	if (!to_return)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				s++;
			to_return[i++] = ft_substr(s - len, 0, len);
		}
		else
			s++;
	}
	to_return[i] = 0;
	return (to_return);
}

static void	fill_normal(t_stack **stack_a, char **argv)
{
	char	**array;
	int		i;
	int		j;

	i = 1;
	while (argv[i] != NULL)
	{
		array = ft_split(argv[i], ' ');
		j = 0;
		while (array[j])
		{
			if (ft_isnumber(array[j]) == 0 || ft_isint(array[j]) == 0)
				ft_error("Error\n");
			ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(array[j])));
			j++;
		}
		free_array(array);
		i++;
	}
}

void	fill_stack(t_stack **stack_a, char **argv)
{
	fill_normal(stack_a, argv);
}
