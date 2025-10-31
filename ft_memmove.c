/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:44:16 by akouiss           #+#    #+#             */
/*   Updated: 2025/10/31 04:52:12 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest || !src)
		return (NULL);
	i = 0;
	if ((unsigned char *)src > (unsigned char *)dest)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			((unsigned char *)dest)[n - 1] = ((unsigned char *)src)[n - 1];
			n--;
		}
	}
	return (dest);
}
// #include <stdio.h>
// int	main(void)
// {
// 	// char str[] = "achraf kouiss";
// 	// char str2[] = "achraf kouiss";

// 	// for (int i = 0; i < 13; i++)
// 	// 	printf("%c ", str[i]);
// 	// printf("\n");
// 	// ft_memmove(str, &str[2], 5);
// 	// // printf("%s\n",(char *)ft_memmove(str, &str[2], 5));
// 	// for (int i = 0; i < 13; i++)
// 	// 	printf("%c ", str[i]);
// 	// printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
// 	// for (int i = 0; i < 13; i++)
// 	// 	printf("%c ", str2[i]);
// 	// printf("\n");
// 	// ft_memmove(&str2[2], str2, 5);
// 	// // printf("%s\n",(char *)ft_memmove(&str[2], str2, 5));
// 	// for (int i = 0; i < 13; i++)
// 	// 	printf("%c ", str2[i]);

// }