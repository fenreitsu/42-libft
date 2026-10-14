/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_lstclear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 20:00:32 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/14 16:33:04 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst;
	t_list	*tmp_i;
	int		i;

	i = 1;
	lst = ft_lstnew(ft_strdup("Hola"));
	lst->next = ft_lstnew(ft_strdup("Mundo"));
	lst->next->next = ft_lstnew(ft_strdup("42"));

	tmp_i = lst;
	printf("\n-------- AANTES --------\n");
	while (tmp_i)
	{
		printf("%dº NODO de lst:  %s\n", i, (char *)tmp_i->content);
		tmp_i = tmp_i->next;
		i++;
	}
	ft_lstclear(&lst, del_content);

	printf("\n-------- DESPUES --------\n");
	if (lst == NULL)
		printf("La lista se liberó correctamente :)\n");
	else
		printf("ERROR: la lista no se liberó bien :(\n");
	return (0);
}
