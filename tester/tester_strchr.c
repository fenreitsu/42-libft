/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_strchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 13:21:44 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/03 19:10:26 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	int		i;
	char	*word;

	i = 'z';
	word = "Hola";
	printf("Palabra: %s | ", word);
	if (i != '\0')
		printf("El 1º caracter encontrado debe ser: %c\n", i);
	else
		printf("El 1º caracter encontrado debe ser: '\\0'\n");
	if (ft_strchr(word, i) == NULL)
		printf("NULL");
	else
		printf("Desde la letra indicada: %s", ft_strchr(word, i));
	return (0);
}
