/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 01:33:28 by akouiss           #+#    #+#             */
/*   Updated: 2025/11/02 09:40:36 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*new_arr;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	i = 0;
	if (start >= s_len)
		return (ft_strdup(""));
	if ((start + len) > s_len)
		len = s_len - start;
	new_arr = malloc(len + 1);
	if (!new_arr)
		return (NULL);
	while (i < len)
	{
		new_arr[i] = s[start];
		start++;
		i++;
	}
	new_arr[i] = '\0';
	return (new_arr);
}
