/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 02:03:49 by akouiss           #+#    #+#             */
/*   Updated: 2025/10/27 17:01:03 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dst[i] = ((char *)src)[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}

// int	main(void)
// {
// 	char	dst[5];
// 	char	src[] = "achraf";
// 	size_t	size;

// 	size = 3;
// 	printf("ft_strlcat = %zu\n", ft_strlcpy(dst, src, size));
// 	printf("dst = %s\n", dst);
// }
