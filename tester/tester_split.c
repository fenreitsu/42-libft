/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_split.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 18:42:57 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/09 23:54:40 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <unistd.h>

static void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	**words;
	int		i;

	if (argc != 2)
	{
		ft_putstr("Parametros no validos");
		return (0);
	}
	else
	{
		words = ft_split(argv[1], 'z');
		i = 0;
		/* if (!(argv = ft_split("", 'z')))
        ft_putstr("NULL");
    	else
        if (!argv[0])
            ft_putstr("ok\n"); */
		while (words[i] != NULL)
		{
			ft_putstr(words[i]);
			ft_putstr("\n");
			i++;
		}
	}
	return (0);
}
