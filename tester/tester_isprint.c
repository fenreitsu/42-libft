/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_isprint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 17:43:35 by reiascan          #+#    #+#             */
/*   Updated: 2026/09/26 17:58:51 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c);

void	ft_putchar(char c);

int main(void)
{
	int	i;

	i = 0;
	while(i <= 127)
	{
		ft_putchar(i);
		ft_putchar('=');
		ft_putchar(ft_isprint(i) + '0');
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}