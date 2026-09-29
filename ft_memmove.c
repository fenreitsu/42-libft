/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 16:24:13 by reiascan          #+#    #+#             */
/*   Updated: 2026/09/29 19:56:15 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*ptrs;
	unsigned char		*ptrd;

	ptrs = src;
	ptrd = dest;
	if (dest > src)
	{
		i = n;
		while (--i < n)
			ptrd[i] = ptrs[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			ptrd[i] = ptrs[i];
			i++;
		}
	}
	return (dest);
}
