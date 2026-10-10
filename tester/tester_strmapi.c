/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_strmapi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 11:39:23 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/10 16:05:52 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

char	change_char(unsigned int i, char c)
{
	return (c + i);
}	

int	main(void)
{

	char				*str;
	char				*n_str;

	str = "Hola";
	n_str = ft_strmapi(str, change_char);
	printf("%s", n_str);
	return (0);
}