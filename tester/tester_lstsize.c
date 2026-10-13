/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_lstsize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:04:53 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/13 17:13:11 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	int		i;
	char	c;
	t_list	*list1;
	t_list	*new_list;
	t_list	*new_list2;

	i = 20;
	c = 'R';
	list1 = NULL;
	new_list = ft_lstnew(&i);
	new_list2 = ft_lstnew(&c);
	ft_lstadd_front(&list1, new_list);
	ft_lstadd_front(&list1, new_list2);
	i = (int)(ft_lstsize(list1));
	printf("%d", i);
	return (0);
}