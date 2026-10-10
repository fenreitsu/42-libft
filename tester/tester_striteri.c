/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_striteri.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 16:06:05 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/10 16:31:53 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
 
void	change_char(unsigned int i, char *c)
{
	*c += i;
}	

int	main(void)
{

	char	str[]= "Hola";

	printf("Antes: %s\n", str);
	ft_striteri(str, change_char);
	printf("Despues: %s", str);
	return (0);
}