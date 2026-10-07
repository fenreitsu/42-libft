/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_strtrim.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 16:55:04 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/07 18:38:26 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str1;
	char	*combo;
	char	*str2;

	str1 = "Bienvenido";
	combo = "Bo";
	str2  = ft_strtrim(str1, combo);

	printf("String original: %s\n", str1);
	printf("String recortado: %s\n", combo);
	if (combo != NULL)
		printf("Nuevo string: %s\n", str2);
	else
		printf("NULL");
	return (0);
}
