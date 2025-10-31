/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:34:39 by akouiss           #+#    #+#             */
/*   Updated: 2025/10/31 18:38:16 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	s_size;
	char	*new_arr;

	i = 0;
	s_size = ft_strlen(s) + 1;
	new_arr = (char *)malloc(sizeof(char) * s_size);
	while (s[i])
	{
		new_arr[i] = ((char *)s)[i];
		i++;
	}
	new_arr[i] = '\0';
	return (new_arr);
}
