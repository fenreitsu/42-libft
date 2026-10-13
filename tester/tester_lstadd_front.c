/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_lstadd_front.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:04:53 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/13 17:01:37 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	int		i;
	t_list	*list1;
	t_list	*new_list;

	i = 20;
	list1 = NULL;
	printf("\n=========Lista1 (int)=========\n");
	if (list1 == NULL)
	{
		printf("list NULL\n");
	}
	new_list = ft_lstnew(&i);
	if (new_list == NULL)
	{
		printf("ft_lstnew devolvió NULL\n");
		return (1);
	}
	ft_lstadd_front(&list1, new_list);
	if (new_list == NULL)
	{
		printf("Error new_list  es null\n");
		return (1);
	}
	printf("\n=========Lista1 MODIFICADA (1ER NODO ES NEW_LIST)=========\n");
	printf("Tamano del puntero: %zu\n",sizeof(list1));
	printf("Tamano del struct: %zu\n",sizeof(*list1));
	printf("Tamano del dato de content: %zu\n", sizeof(*(int *)list1->content));
	printf("Valor (content) anadido a la lista1: %d\n", *(int *)list1->content);
	if (list1->next == NULL)
		printf("Next es null\n");
	else
		printf("Algo salio mal, revisar funcion lstnew\n");
	return (0);
}