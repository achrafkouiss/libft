/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 08:46:52 by akouiss           #+#    #+#             */
/*   Updated: 2025/11/01 04:01:47 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	word_count;

	i = 0;
	word_count = 0;
	while (s[i])
	{
		while ((s[i] == c) && s[i])
			i++;
		if (s[i])
			word_count++;
		while (!(s[i] == c) && s[i])
			i++;
	}
	return (word_count);
}

static size_t	ft_word_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (!(s[i] == c) && s[i])
		i++;
	return (i);
}

static char	*ft_allo_arr(const char *s, char c)
{
	size_t	i;
	size_t	size;
	char	*new_arr;

	i = 0;
	size = ft_word_len(s, c) + 1;
	new_arr = malloc(size);
	if (!new_arr)
		return (NULL);
	while (!(s[i] == c) && s[i])
	{
		new_arr[i] = s[i];
		i++;
	}
	new_arr[i] = '\0';
	return (new_arr);
}

static char	**ft_free_heap(char **arr, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
		free(arr[i++]);
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**new_arr;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	new_arr = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!new_arr)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			new_arr[j] = ft_allo_arr(&s[i], c);
		if (s[i] && !new_arr[j++])
			return (ft_free_heap(new_arr, j - 1));
		while (s[i] && s[i] != c)
			i++;
	}
	new_arr[j] = NULL;
	return (new_arr);
}
