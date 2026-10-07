/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 16:55:08 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/07 18:43:50 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len_s1;
	size_t	tmp;
	char	*new_str;

	i = 0;
	len_s1 = ft_strlen(s1);
	new_str = malloc(len_s1 + 1);
	if (new_str == NULL)
		return (NULL);
	while (s1[i])
	{
		tmp = i;
		j = 0;
		while (s1[i] == set[j] && set[j])
		{
			i++;
			j++;
		}
		new_str[i] = s1[i];
		i =  tmp + i;
	}
	new_str[i] = '\0';
	return (new_str);
}
