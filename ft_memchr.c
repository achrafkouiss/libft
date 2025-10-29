/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 01:08:07 by akouiss           #+#    #+#             */
/*   Updated: 2025/10/28 13:11:45 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}

// int main()
// {
//     char    a[] = "achraf kouiss";

//     printf("ft_memchr = %p\n", ft_memchr(a, 'k', 12));
//     printf("memchr = %p\n", memchr(a, 'k', 12));
//     printf("ft_memchr = %c\n", *(char *)ft_memchr(a, 'k', 12));
//     printf("memchr = %c\n", *(char *)memchr(a, 'k', 12));
// }