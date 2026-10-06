/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 14:48:43 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/06 16:09:42 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		s_len;
	char	*dup;

	s_len = ft_strlen(s);
	dup = malloc((s_len + 1));
	if (dup == NULL)
		return (0);
	dup = ft_memcpy(dup, s, s_len + 1);
	return (dup);
}
