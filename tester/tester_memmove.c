/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_memmove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 19:47:40 by fenreitsu         #+#    #+#             */
/*   Updated: 2026/09/29 19:56:15 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char arr[5] = "Hola";

	printf("Antes: %s\n", arr);
	ft_memmove(arr +2, arr, ft_strlen(arr));
	printf("Despues: %s\n", arr);
	return (0);
}
