/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_lstnew.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 16:35:06 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/11 16:35:07 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*node;
	t_list	*empty;
	int		value;

	value = 42;
	node = ft_lstnew(&value);
	if (!node)
	{
		printf("ft_lstnew devolvio NULL\n");
		return (1);
	}
	printf("content = %d (esperado 42)\n", *(int *)node->content);
	printf("next == NULL: %d\n", node->next == NULL);

	empty = ft_lstnew(NULL);
	printf("content == NULL: %d\n", empty->content == NULL);
	printf("next == NULL: %d\n", empty->next == NULL);

	free(node);
	free(empty);
	return (0);
}
