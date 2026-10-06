/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_atoi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 17:28:16 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/06 19:25:11 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str;
	str = "-48";
	printf("str1: %s\n", str);
	printf("Su numero es: %d\n\n", ft_atoi(str));
	str = "   \t\n\v\f\r--+---1548123";
	printf("str1: %s\n", str);
	printf("Su numero es: %d\n\n", ft_atoi(str));
	str = "   --+---1548123";
	printf("str2: %s\n", str);
	printf("Su numero es: %d\n\n", ft_atoi(str));
	str = "   \t\n\v\f\r--+--Cf	f	1548123";
	printf("str3: %s\n", str);
	printf("Su numero es: %d\n\n", ft_atoi(str));
	str = "ccd1548123";
	printf("str4: %s\n", str);
	printf("Su numero es: %d\n\n", ft_atoi(str));
	str = "---42cf45";
	printf("str5: %s\n", str);
	printf("Su numero es: %d\n\n", ft_atoi(str));
	return (0);
}