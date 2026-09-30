/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_strlcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 14:36:25 by reiascan          #+#    #+#             */
/*   Updated: 2026/09/30 19:52:04 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char  *arr1;
	char  arr2[4];
	char  *tmp;

	arr1 = "Hola";
	printf("Antes: ");
	tmp = arr1;
	while (*tmp)
	{
		printf("%c", *tmp);
		tmp++;
	}
	printf("\nLongitud arr1: %zu\n", ft_strlen(arr1));
	printf("Longitud  %zu\n", ft_strlcpy(arr2, arr1, 10));
	printf("Despues: ");
	tmp = arr2;
	while (*tmp)
	{
		printf("%c", *tmp);
		tmp++;
	}
	printf("\n");
	return (0);
}
