/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_strnstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 11:59:35 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/06 14:32:35 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = ft_strnstr("Buenos dias", "dias", 2);
	if (str == NULL)
		printf("NULL");
	else
		printf("Match encontrado: %s", str);
	return (0);
}
