/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 13:29:11 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/07 16:53:51 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			i;
	size_t			real_len;
	size_t			s_len;

	i = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
		real_len = 0;
	else if (len < s_len - start)
		real_len = len;
	else
		real_len = s_len - start;
	sub = malloc(real_len + 1);
	if (sub == NULL)
		return (NULL);
	while (i < real_len && s[start])
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
