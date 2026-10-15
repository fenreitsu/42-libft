/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_bzero.c                                     :+:      :+:    :+:   */
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
	char	buf[16];
	char	ref[16];
	size_t	i;
	int		ok;

	i = 0;
	while (i < sizeof(buf))
	{
		buf[i] = 'A';
		ref[i] = 'A';
		i++;
	}
	ft_bzero(buf, 8);
	memset(ref, 0, 8);
	ok = 1;
	i = 0;
	while (i < sizeof(buf))
	{
		if (buf[i] != ref[i])
			ok = 0;
		i++;
	}
	printf("Caso n=8: %s\n", ok ? "igual que memset" : "DISTINTO de memset");
	printf("Caso n=8: primer byte = %d (esperado 0)\n", buf[0]);
	strcpy(buf, "Hola");
	ft_bzero(buf, 0);
	printf("Caso n=0: \"%s\" (debe seguir \"Hola\")\n", buf);
	strcpy(buf, "12345");
	ft_bzero(buf, 3);
	printf("Caso \"12345\" n=3: [%d][%d][%d] y resto = \"%s\"\n",
		buf[0] == 0, buf[1] == 0, buf[2] == 0, &buf[3]);
	return (0);
}
