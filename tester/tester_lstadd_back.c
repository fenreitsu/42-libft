/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_lstadd_back.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:41:52 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/14 15:57:25 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int		a;
	int		b;
	int		c;
	t_list	*list;
	t_list	*nodo1;
	t_list	*nodo2;
	t_list	*nodo3;

	a = 10;
	b = 20;
	c = 30;

	printf("\n-------- PRUEBA 1: lista vacía --------n");
	list = NULL;
	printf("Antes: list %s NULL\n", list == NULL ? "es" : "NO es");

	nodo1 = ft_lstnew(&a);
	if (nodo1 == NULL)
	{
		printf("ft_lstnew devolvió NULL\n");
		return (1);
	}
	ft_lstadd_back(&list, nodo1);

	printf("Después: list %s NULL\n", list == NULL ? "es" : "NO es");
	if (list != NULL)
	{
		printf("  list->content = %d\n", *(int *)list->content);
		printf("  list->next    = %s\n",
			list->next == NULL ? "NULL" : "NO NULL");
	}
	printf("\n-------- PRUEBA 2 lista con 1 nodo --------\n");
	nodo2 = ft_lstnew(&b);
	if (nodo2 == NULL)
	{
		printf("ft_lstnew devolvió NULL\n");
		return (1);
	}
	ft_lstadd_back(&list, nodo2);

	printf("Lista después:\n");
	printf("  [0] = %d\n", *(int *)list->content);
	printf("  [1] = %d\n", *(int *)list->next->content);
	printf("  [1]->next = %s\n",
		list->next->next == NULL ? "NULL" : "NO NULL");
	printf("\n-------- PRUEBA 3lista con 2 nodos --------\n");
	nodo3 = ft_lstnew(&c);
	if (nodo3 == NULL)
	{
		printf("ft_lstnew devolvió NULL\n");
		return (1);
	}
	ft_lstadd_back(&list, nodo3);

	printf("Lista después:\n");
	printf("  [0] = %d\n", *(int *)list->content);
	printf("  [1] = %d\n", *(int *)list->next->content);
	printf("  [2] = %d\n", *(int *)list->next->next->content);
	printf("  [2]->next = %s\n",
		list->next->next->next == NULL ? "NULL" : "NO NULL");

	/* ============================================
	   Comprobación de tamaños (tu estilo)
	   ============================================ */
	printf("\n========= Tamaños =========\n");
	printf("sizeof(list)                  = %zu\n", sizeof(list));
	printf("sizeof(*list)                 = %zu\n", sizeof(*list));
	printf("sizeof(*(int *)list->content) = %zu\n",
		sizeof(*(int *)list->content));

	/* ============================================
	   Liberar memoria
	   ============================================ */
	free(nodo1);
	free(nodo2);
	free(nodo3);

	return (0);
}