/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_isalnum.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 12:00:00 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/15 12:00:00 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	c;
	int		bad;

	printf("Letras y digitos: ");
	bad = 0;
	c = 'A';
	while (c <= 'Z')
	{
		if (!ft_isalnum(c))
			bad++;
		c++;
	}
	c = 'a';
	while (c <= 'z')
	{
		if (!ft_isalnum(c))
			bad++;
		c++;
	}
	c = '0';
	while (c <= '9')
	{
		if (!ft_isalnum(c))
			bad++;
		c++;
	}
	printf("%d fallos (esperado 0)\n", bad);
	printf("No alfanumericos (esperado 0): simbolos=%d espacio=%d\n",
		ft_isalnum('!') + ft_isalnum('@'), ft_isalnum(' '));
	printf("Limites: %c=%d (esperado 0), %c=%d (esperado 0)\n",
		'9' + 1, ft_isalnum('9' + 1), '0' - 1, ft_isalnum('0' - 1));
	return (0);
}
