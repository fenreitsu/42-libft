/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_toupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 12:00:26 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/03 13:20:21 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	int	letter;

	letter = 'a' - 1;
	while (letter++ < 122)
		printf("%c", letter);
	printf("\n");
	letter = 'a' - 1;
	while (letter++ < 122)
		printf("%c", ft_toupper(letter));
	printf("\n");
	letter = 47;
	while (letter++ < 57)
		printf("%c", ft_toupper(letter));
	return (0);
}
