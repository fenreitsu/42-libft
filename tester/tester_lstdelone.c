/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_lstdelone.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 20:00:32 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/14 16:13:11 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void del_content(void *content)
{
    free(content);
}

int main(void)
{
    t_list	*list;
    char	*str;

	str = ft_calloc(5, sizeof(char));
	ft_memcpy(str, "Hola", 5);

	list = ft_lstnew(str);
	printf("\n=========Lista antes: =========\n");
	printf("Tamano del dato de content: %zu\n", ft_strlen((char *)list->content));
	printf("Valor (content) anadido a la lista1: %s\n", (char *)list->content);
	
    ft_lstdelone(list, del_content);
	printf("\n=========Lista Despues: =========\n");
	printf("Tamano del dato de content: %zu\n", ft_strlen((char *)list->content));
	printf("Valor (content) anadido a la lista1: %s\n", (char *)list->content);
    return (0);
}
