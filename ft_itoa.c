/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 01:32:23 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/10 13:51:39 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_decimal(int n)
{
	int	count;

	count = 1;
	if (n < 0)
		count++;
	while (n / 10 != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str_nbr;
	int		len;
	int		i;

	len = ft_count_decimal(n);
	i = len - 1;
	str_nbr = malloc((len + 1) * sizeof(char));
	if (str_nbr == NULL)
		return (NULL);
	if (n < 0)
	{
		if (n == -2147483648)
			return (ft_memcpy(str_nbr, "-2147483648", 12));
		n *= -1;
		str_nbr[0] = '-';
	}
	while (n > 9)
	{
		str_nbr[i--] = (n % 10) + '0';
		n = n / 10;
	}
	str_nbr[i] = n + '0';
	str_nbr[len] = '\0';
	return (str_nbr);
}
