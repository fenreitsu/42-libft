/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_isascii.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 17:43:35 by reiascan          #+#    #+#             */
/*   Updated: 2026/09/26 17:52:28 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c);

void	ft_putchar(char c);

/* int main(void)
{
	int	i;

	i = 48;
	while(i <= '9')
	{
		ft_putchar(i);
		ft_putchar('=');
		ft_putchar(ft_isascii(i) + '0');
		ft_putchar(' ');

		i++;
	}
	ft_putchar('\n');

	i = 'a';
	while (i <= 'z')
	{
		ft_putchar(i);
		ft_putchar('=');
		ft_putchar(ft_isascii(i) + '0');
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');

	i = 'A';
	while (i <= 'Z')
	{
		ft_putchar(i);
		ft_putchar('=');
		ft_putchar(ft_isascii(i) + '0');
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');

	i = 'A';
	while (i <= 'Z')
	{
		ft_putchar(i);
		ft_putchar('=');
		ft_putchar(ft_isascii(i) + '0');
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
} */

/* int main(void)
{
	ft_putchar(ft_isascii(127) + '0');
} */

int main(void)
{
	int	i;

	i = 0;
	while(i <= 127)
	{
		ft_putchar(i);
		ft_putchar('=');
		ft_putchar(ft_isascii(i) + '0');
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}