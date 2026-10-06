/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_memchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 15:18:34 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/04 16:14:35 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str_in;
	char	*str_out;
	int		chr;
	size_t	n_bytes;

	str_in = "Hola";
	chr = 'o';
	n_bytes = 2;
	printf("Palabra completa: %s\n", str_in);
	printf("Byte de inicio: %zu\n", n_bytes);
	str_out = ft_memchr(str_in, chr, n_bytes);
	if (str_out != NULL)
		printf("%s\n", str_out);
	else
		printf("NULL");
	return (0);
}
