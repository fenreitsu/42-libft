/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 13:52:42 by reiascan          #+#    #+#             */
/*   Updated: 2026/09/26 16:14:00 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c);

void	ft_putchar(char c);

int main(void)
{
	ft_putchar('4');
	ft_putchar('\n');
	ft_putchar(ft_isdigit('A') + '0');
}