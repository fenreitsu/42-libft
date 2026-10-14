/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_lstiter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:40:50 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/14 17:37:56 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew("Hola");
	lst->next = ft_lstnew("Mundo");
	lst->next->next = ft_lstnew("42");

	ft_lstiter(lst, print_content);

	return (0);
}
