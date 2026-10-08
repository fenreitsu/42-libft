/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v2_ft_strtrim.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 15:46:11 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/08 15:50:37 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../ft_strlen.c"
#include "../ft_strchr.c"

size_t	trim_end(char const *s1, char const *set, size_t i)
{
	size_t	k;
	size_t	end;

	end = ft_strlen(s1);
	while (i < end)
	{
		if (ft_strchr(set, s1[i]) == NULL)
		{
			i++;
			continue ;
		}
		k = i;
		while (k < end && ft_strchr(set, s1[k]))
			k++;
		if (k == end)
			return (i);
		i = k;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	start;
	size_t	end;
	size_t	j;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = trim_end(s1, set, start);
	new_str = malloc(end - start + 1);
	if (new_str == NULL)
		return (NULL);
	j = 0;
	while (start < end)
		new_str[j++] = s1[start++];
	new_str[j] = '\0';
	return (new_str);
}
