/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_substr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 13:29:13 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/07 16:59:56 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char			*str;
	char			*sub_str;
	unsigned int	start;
	size_t			max_len;

	start = 600;
	max_len = 500;
	str = "Constantinopla";
	sub_str = ft_substr(str, start, max_len);

	printf("Cadena original: %s\n", str);
	printf("Indice de incio para subcadena: [%d]\n", start);
	printf("Tamaño total maximo para subcadena: %zu\n", max_len);
	if (sub_str != NULL)
	{
		printf("Tamaño final posible de  la subcadena: %zu\n", ft_strlen(sub_str));
		printf("La subcadena es: %s\n", sub_str);
	}
	else
		printf("NULL");
	return (0);
}