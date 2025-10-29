/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:39:29 by akouiss           #+#    #+#             */
/*   Updated: 2025/10/28 13:14:51 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkchar(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_arr_size(char const *s1, char const *set)
{
	size_t	i;
	size_t	s1_len;
	size_t	size;

	s1_len = ft_strlen(s1) - 1;
	i = 0;
	while (ft_checkchar(s1[i], set))
	{
		if (s1[i + 1] == '\0')
			return (0);
		i++;
	}
	while (ft_checkchar(s1[s1_len], set))
		s1_len--;
	size = s1_len - i + 1;
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	*new_arr;

	size = ft_arr_size(s1, set);
	if (!size)
		return (ft_strdup(""));
	new_arr = malloc(size + 1);
	if (!new_arr)
		return (NULL);
	i = 0;
	j = 0;
	while (ft_checkchar(s1[i], set))
		i++;
	while (j < size)
	{
		new_arr[j] = s1[i];
		i++;
		j++;
	}
	new_arr[j] = '\0';
	return (new_arr);
}
// int	main(void)
// {
// 	char *s1 = "aaaakouissbbbbsssss";
// 	char *set = "abc";

// 	printf("%s\n", ft_strtrim(s1, set));
// }