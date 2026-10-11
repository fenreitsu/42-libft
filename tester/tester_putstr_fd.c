/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_putstr_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 18:04:51 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/11 15:51:14 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);

int	main(void)
{
	int	fd;

	/* 1. String normal en stdout */
	ft_putstr_fd("Hola mundo\n", 1);

	/* 2. String vacía (no debe imprimir nada) */
	ft_putstr_fd("", 1);

	/* 3. String con solo salto de línea */
	ft_putstr_fd("\n", 1);

	/* 4. String con espacios y símbolos */
	ft_putstr_fd("a b\tc!@#\n", 1);

	/* 5. String larga (100 'x') */
	ft_putstr_fd("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"
		"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n", 1);

	/* 6. String en stderr (fd = 2) */
	ft_putstr_fd("Esto va a stderr\n", 2);

	/* 7. Escribir en un archivo */
	fd = open("out.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_putstr_fd("Linea escrita en archivo\n", fd);
	close(fd);

	/* 8. fd inválido (no debe petar) */
	ft_putstr_fd("Esto no se ve\n", -1);
	ft_putstr_fd("Esto tampoco\n", 999);

	/* 9. String con carácter nulo en medio (corta ahí) */
	ft_putstr_fd("abc\0def\n", 1);

	return (0);
}