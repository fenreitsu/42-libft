/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 16:13:19 by reiascan          #+#    #+#             */
/*   Updated: 2026/09/26 17:16:54 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c);

void	ft_putchar(char c);

/* int main(void)
{
	int	i;

	i = 48;
	while(i <= '9')
	{
		ft_putchar(i);
		ft_putchar('=');
		ft_putchar(ft_isalnum(i) + '0');
		ft_putchar(' ');

		i++;
	}
	ft_putchar('\n');

	i = 'a';
	while (i <= 'z')
	{
		ft_putchar(i);
		ft_putchar('=');
		ft_putchar(ft_isalnum(i) + '0');
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');

	i = 'A';
	while (i <= 'Z')
	{
		ft_putchar(i);
		ft_putchar('=');
		ft_putchar(ft_isalnum(i) + '0');
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');

	i = 'A';
	while (i <= 'Z')
	{
		ft_putchar(i);
		ft_putchar('=');
		ft_putchar(ft_isalnum(i) + '0');
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
} */

int main(void)
{
	ft_putchar(ft_isalnum(127) + '0');
}