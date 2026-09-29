/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_strlen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 18:00:41 by reiascan          #+#    #+#             */
/*   Updated: 2026/09/27 15:18:33 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(const char *s);

void	ft_putnbr(int n)
{
	char	digit;

	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
		ft_putnbr(n);
	}
	else
	{
		digit = (n % 10) + 48;
		if (n / 10 != 0)
			ft_putnbr((n / 10));
		write(1, &digit, 1);
	}
}

int	main(void)
{
	char	*s;

	s = "Campus 42 $&/()";
	ft_putnbr(ft_strlen(s));
	return (0);
}