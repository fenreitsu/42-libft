/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_lstlast.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:13:57 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/13 17:40:44 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	int		i;
	char	c;
	char 	*str;
	t_list	*list1;
	t_list	*new_list;
	t_list	*new_list2;
	t_list	*new_list3;

	i = 20;
	c = 'R';
	str = "hola";
	list1 = NULL;
	new_list = ft_lstnew(&i);
	new_list2 = ft_lstnew(&c);
	new_list3 = ft_lstnew(str);
	ft_lstadd_front(&list1, new_list);
	ft_lstadd_front(&list1, new_list2);
	printf("tamano de struct: %zu\n", sizeof(*list1));
	printf("Contenido: %s\n", (char *)list1->content);
	ft_lstadd_front(&list1, new_list3);
	ft_lstlast(list1);
	printf("tamano de struct: %zu\n", sizeof(*list1));
	printf("Contenido: %s\n", (char *)list1->content);
	return (0);
}