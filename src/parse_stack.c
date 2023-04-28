/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 03:45:32 by ckarakus          #+#    #+#             */
/*   Updated: 2023/04/28 03:46:59 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	**ft_split(char const *s, char c)
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

void	fill_stack(t_stack **stack_a, int argc, char **argv)
{
    int		i;
    char	**array;

    i = 0;
    if (argc == 2)
    {
        array = ft_split(argv[1], ' ');
        while (array[i] != NULL)
        {
            if (ft_isnumber(array[i]) == 0)
                ft_error("Error");
            ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(array[i])));
            i++;
        }
        free_array(array);
    }
    else
    {
        while (i < argc - 1)
        {
            if (ft_isnumber(argv[i + 1]) == 0)
                ft_error("Error");
            ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(argv[i + 1])));
            i++;
        }
    }
}