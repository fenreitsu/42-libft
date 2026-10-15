/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_memset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 12:00:00 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/15 12:00:00 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	buf[10];
	char	ref[10];
	void	*ret;
	size_t	i;
	int		ok;

	ft_memset(buf, 'X', 10);
	memset(ref, 'X', 10);
	ok = 1;
	i = 0;
	while (i < sizeof(buf))
	{
		if (buf[i] != ref[i])
			ok = 0;
		i++;
	}
	printf("Relleno 'X' (10 bytes): %s\n",
		ok ? "igual que memset" : "DISTINTO de memset");

	ft_memset(buf, 258, 4);
	printf("Byte fuera de rango (258): primer byte = %d (esperado 2)\n",
		buf[0]);

	buf[0] = 'A';
	ft_memset(buf, 'Z', 0);
	printf("n=0: primer byte = '%c' (debe ser 'A')\n", buf[0]);

	ret = ft_memset(buf, '#', 3);
	buf[3] = 0;
	printf("Retorno == buffer: %d\n", ret == (void *)buf);
	printf("Resultado: \"%s\"\n", buf);
	return (0);
}
