/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 13:52:42 by reiascan          #+#    #+#             */
/*   Updated: 2026/09/26 15:54:12 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c);

void	ft_putchar(char c);

// void	ft_putstr(char *str);

int main(void)
{
	ft_putchar('B');
	ft_putchar('\n');
	ft_putchar(ft_isalpha(33) + '0');
}