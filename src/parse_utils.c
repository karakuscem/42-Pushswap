/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 03:45:53 by ckarakus          #+#    #+#             */
/*   Updated: 2023/05/03 18:49:16 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_strlen(const char *s)
{
	if (*s)
		return (1 + ft_strlen(s + 1));
	return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*to_return;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		len = 0;
	else if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	to_return = malloc(len + 1 * sizeof(char));
	if (!to_return)
		return (NULL);
	while (i < len && s[start + i])
	{
		to_return[i] = s[start + i];
		i++;
	}
	to_return[i] = '\0';
	return (to_return);
}

size_t	ft_counter(char const *s, char c)
{
	size_t	counter;

	counter = 0;
	while (*s)
	{
		if (*s != c)
		{
			counter++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (counter);
}

void	free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array);
}
