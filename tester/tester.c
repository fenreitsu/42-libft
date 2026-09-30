/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 19:47:40 by fenreitsu         #+#    #+#             */
/*   Updated: 2026/09/29 16:22:40 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_putchar(char b)
{
	write(1, &b, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_putnbr(int nb)
{
	char	digit;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
		ft_putnbr(nb);
	}
	else
	{
		digit = nb % 10 + 48;
		if (nb / 10 != 0)
			ft_putnbr((nb / 10));
		write (1, &digit, 1);
	}
}

int	main(void)
{
	int	a = 10;
	char *str = malloc(5);
	char *str2;

	str2 = "NNew";
	ft_putchar('\n');
	ft_putnbr(a);
	ft_putchar('\n');
	ft_memset(&a, 1, sizeof(a));
	ft_putnbr(a);
	ft_putchar('\n');
	//
	ft_putchar('\n'); 
	strcpy(str, "hola");
	ft_putnbr(ft_strlen(str));
	ft_putstr(str);
	ft_bzero(str, ft_strlen(str));
	ft_putnbr(ft_strlen(str));
	ft_putstr("\n");
	// 
	strcpy(str, "memcpy");
	ft_putstr(str);
	ft_memcpy(str, str2, ft_strlen(str));
	ft_putstr(str);
	ft_putnbr(ft_strlen(str));
	return (0);
}
