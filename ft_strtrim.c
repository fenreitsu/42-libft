/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 16:55:08 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/08 22:22:20 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_str(char *dest, const char *src, size_t start, size_t end)
{
	size_t	i;

	i = 0;
	while (start < end)
	{
		dest[i] = src[start];
		start++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*trimmed_s;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
		i++;
	start = i;
	i = ft_strlen(s1);
	while (start < i && ft_strchr(set, s1[i - 1]) != NULL)
		i--;
	end = i;
	trimmed_s = malloc(end - start + 1);
	if (trimmed_s == NULL)
		return (NULL);
	ft_str(trimmed_s, s1, start, end);
	return (trimmed_s);
}
