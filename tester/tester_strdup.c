/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_strdup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 14:48:41 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/06 16:07:24 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	*src;

	src = "Hola";
	printf("Palabra origen: %s\n", src);
	printf("Nuevo arr: %s\n", ft_strdup(src));
	return (0);
}