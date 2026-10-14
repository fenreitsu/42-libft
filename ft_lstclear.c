/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:04:30 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/14 16:12:38 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp_lst;

	if (*lst == NULL || del == NULL)
	{
		return ;
	}
	while (*lst != NULL)
	{
		tmp_lst = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp_lst;
	}
	*lst = NULL;
}
