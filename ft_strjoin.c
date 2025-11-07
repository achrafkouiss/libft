/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 20:31:51 by akouiss           #+#    #+#             */
/*   Updated: 2025/11/02 09:23:14 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	arr_size;
	size_t	s1_len;
	size_t	s2_len;
	char	*new_arr;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	arr_size = s1_len + s2_len + 1;
	new_arr = ft_calloc(arr_size, sizeof(char));
	if (!new_arr)
		return (NULL);
	ft_strlcpy(new_arr, s1, s1_len + 1);
	ft_strlcat(new_arr, s2, arr_size);
	return (new_arr);
}
