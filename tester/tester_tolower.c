/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_tolower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 12:43:18 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/03 13:20:26 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	int	letter;

	letter = 'A' - 1;
	while (letter++ < 90)
		printf("%c", letter);
	printf("\n");
	letter = 'A' - 1;
	while (letter++ < 90)
		printf("%c", ft_tolower(letter));
	printf("\n");
	letter = 47;
	while (letter++ < 57)
		printf("%c", ft_tolower(letter));
	return (0);
}
