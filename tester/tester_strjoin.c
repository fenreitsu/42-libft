/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_strjoin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 17:34:50 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/07 18:10:28 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*new_str;

	str1 = "Hola ";
	str2 = "¿Como estas?";
	new_str = ft_strjoin(str1, str2);
	if (new_str == NULL)
		printf("NULL");
	else
		printf("%s\n", new_str);
	return (0);
}