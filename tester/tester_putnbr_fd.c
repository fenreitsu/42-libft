/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_putnbr_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 16:01:19 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/11 16:01:20 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	printf("0: ");
	ft_putnbr_fd(0, 1);
	printf("\n");
	printf("42: ");
	ft_putnbr_fd(42, 1);
	printf("\n");
	printf("-42: ");
	ft_putnbr_fd(-42, 1);
	printf("\n");
	printf("INT_MAX: ");
	ft_putnbr_fd(INT_MAX, 1);
	printf("\n");
	printf("INT_MIN: ");
	ft_putnbr_fd(INT_MIN, 1);
	printf("\n");
	return (0);
}
