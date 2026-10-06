/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_memcmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 17:41:24 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/04 17:52:32 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str1;
	char	*str2;
	int		n;

	str1 = "abcd";
	str2 = "abcde";
	n = 4;
	printf("Diff: %d", ft_memcmp(str1, str2, n));
	return (0);
}