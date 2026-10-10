/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_itoa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 11:41:04 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/10 13:29:11 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char  *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	*str_number;
	int	n;

	n = 9;
	str_number = ft_itoa(n);
	if (!str_number)
		ft_putstr("NULL");
	else
	{
		ft_putstr(str_number);
		printf("\n%zu", ft_strlen(str_number));
	}
	free(str_number);
	return (0);
}
