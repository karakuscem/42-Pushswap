/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarakus <ckarakus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:24:13 by ckarakus          #+#    #+#             */
/*   Updated: 2023/05/03 18:45:31 by ckarakus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

char	*ft_substr(char const *s, int start, int len)
{
	char	*to_return;
	int		i;

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
