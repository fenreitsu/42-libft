/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_isalpha.c                                   :+:      :+:    :+:   */
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

	printf("Mayusculas A-Z: ");
	bad = 0;
	c = 'A';
	while (c <= 'Z')
	{
		if (!ft_isalpha(c))
			bad++;
		c++;
	}
	printf("%d fallos (esperado 0)\n", bad);
	printf("Minusculas a-z: ");
	bad = 0;
	c = 'a';
	while (c <= 'z')
	{
		if (!ft_isalpha(c))
			bad++;
		c++;
	}
	printf("%d fallos (esperado 0)\n", bad);
	printf("No letras (esperado 0): digitos=%d simbolos=%d espacio=%d\n",
		ft_isalpha('0') + ft_isalpha('9'),
		ft_isalpha('!') + ft_isalpha('@'), ft_isalpha(' '));
	printf("Limites justo fuera: %c=%d (esperado 0), %c=%d (esperado 0)\n",
		'Z' + 1, ft_isalpha('Z' + 1), 'a' - 1, ft_isalpha('a' - 1));
	return (0);
}
