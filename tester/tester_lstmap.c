/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_lstmap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:46:24 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/14 18:53:38 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void	*str_to_upper(void *content)
{
	char	*new_str;
	int		i;

	new_str = ft_strdup((char *)content);
	i = 0;
	while (new_str[i])
	{
		new_str[i] = ft_toupper(new_str[i]);
		i++;
	}
	return (new_str);
}

void	del(void *content)
{
	free(content);
}

void	print(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list	*lst;
	t_list	*new_lst;

	lst = ft_lstnew(ft_strdup("Hola"));
	lst->next = ft_lstnew(ft_strdup("Mundo"));
	lst->next->next = ft_lstnew(ft_strdup("42"));

	new_lst = ft_lstmap(lst, str_to_upper, del);

	printf("Lista original:\n");
	ft_lstiter(lst, print);
	printf("Lista mapeada (mayusculas):\n");
	ft_lstiter(new_lst, print);

	ft_lstclear(&lst, del);
	ft_lstclear(&new_lst, del);
	return (0);
}