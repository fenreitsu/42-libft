/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 18:42:50 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/10 00:10:30 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *arr, char c)
{
	size_t	is_word;
	size_t	count;

	is_word = 0;
	count = 0;
	while (*arr)
	{
		if (*arr != c && is_word == 0)
		{
			is_word = 1;
			count++;
		}
		else if (*arr == c)
			is_word = 0;
		arr++;
	}
	return (count);
}

static char	*ft_find_word(char const *arr, size_t start, size_t end)
{
	char	*word;
	size_t	i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	while (start < end)
	{
		word[i] = arr[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

static void	ft_free_arr(char **arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static char	**ft_fillarr(char **arr, char const *s, char c, size_t n_word)
{
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	start = i;
	while (i < n_word)
	{
		while (s[start] && s[start] == c)
			start++;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		arr[i] = ft_find_word(s, start, end);
		if (arr[i] == NULL)
		{
			ft_free_arr(arr, i);
			return (NULL);
		}
		start = end;
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr_words;
	size_t	n_word;	

	n_word = ft_count_words(s, c);
	arr_words = malloc((n_word + 1) * sizeof(char *));
	if (arr_words == NULL)
		return (NULL);
	arr_words = ft_fillarr(arr_words, s, c, n_word);
	return (arr_words);
}
