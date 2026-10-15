/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_putendl_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 15:52:04 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/11 15:52:04 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	printf("--- fd 1 (stdout) ---\n");
	ft_putendl_fd("Hola mundo", 1);
	ft_putendl_fd("", 1);
	ft_putendl_fd("ultima linea", 1);

	printf("--- fd 2 (stderr) ---\n");
	ft_putendl_fd("Esto va a stderr", 2);
	return (0);
}
