/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_strlcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 16:55:54 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/03 20:01:01 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	d[50] = "Ultimo";
	char	*s;

	s = "Primero";
	
	printf("Origen (Antes): %s | Length: %zu\n", s, ft_strlen(s));
	printf("Destino (Antes): %s | Length: %zu\n", d, ft_strlen(d));
	printf("Destino (Despues): %s | Length: %zu\n", d, ft_strlcat(d, s, 13));
	return (0);
}
