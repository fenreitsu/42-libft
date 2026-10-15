/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_isdigit.c                                   :+:      :+:    :+:   */
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

	printf("Digitos 0-9: ");
	bad = 0;
	c = '0';
	while (c <= '9')
	{
		if (!ft_isdigit(c))
			bad++;
		c++;
	}
	printf("%d fallos (esperado 0)\n", bad);
	printf("No digitos (esperado 0): letras=%d simbolos=%d espacio=%d\n",
		ft_isdigit('a') + ft_isdigit('Z'),
		ft_isdigit('/') + ft_isdigit(':'), ft_isdigit(' '));
	printf("Limites justo fuera: %c=%d (esperado 0), %c=%d (esperado 0)\n",
		'0' - 1, ft_isdigit('0' - 1), '9' + 1, ft_isdigit('9' + 1));
	return (0);
}
