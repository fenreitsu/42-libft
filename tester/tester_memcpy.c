/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_memcpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 19:11:42 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/04 15:55:07 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	dst[32];
	void	*ret;

	dst[0] = 0;
	ft_memcpy(dst, "Hola mundo", 11);
	dst[11] = 0;
	printf("Copia de \"Hola mundo\": \"%s\"\n", dst);

	ft_memcpy(dst, "ABCDEFG", 4);
	dst[4] = 0;
	printf("Copia parcial (4 bytes): \"%s\" (esperado \"ABCD\")\n", dst);

	ft_memcpy(dst, "XYZ", 0);
	printf("n=0 no toca el destino: \"%s\"\n", dst);

	ret = ft_memcpy(dst, "42", 3);
	printf("Retorno == destino: %d\n", ret == (void *)dst);
	printf("Resultado: \"%s\"\n", dst);
	return (0);
}