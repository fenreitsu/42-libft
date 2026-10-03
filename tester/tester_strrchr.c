/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_strrchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 17:36:10 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/03 20:49:47 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	int		i;
	char	*word;

	i = '\0';
	word = "Versiones";
	printf("Palabras: %s | ", word);
	if  (i != '\0')
		printf("La ultima coincidencia debe ser: %c\n", i);
	else
		printf("La ultima coincidencia debe ser: '\\0'\n");
	if (ft_strrchr(word, i) == NULL)
		printf("NULL");
	else
		printf("Desde la ultima posicion de la letra indicada: %s", ft_strrchr(word, i));
	return (0);
}