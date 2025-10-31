/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:18:58 by akouiss           #+#    #+#             */
/*   Updated: 2025/10/31 04:35:34 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*pointer;
	size_t			i;

	if (!s)
		return ;
	i = 0;
	pointer = (unsigned char *)s;
	while (i < n)
	{
		pointer[i] = 0;
		i++;
	}
}

// #include <strings.h>
// #include <stdio.h>

// int	main()
// {
// 	char	str[] = "achraf";
// 	char	str2[] = "achraf";
// 	int	j = 4;

// 	for (int i = 0; i < 6; i++)
// 	{
// 		printf("str before %d = %d\n", i, str[i]);
// 		printf("str2 before %d = %d\n", i, str2[i]);
// 	}
// 	printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
// 	ft_bzero(str, j);
// 	bzero(str2, j);
// 	for (int i = 0; i < 6; i++)
// 	{
// 		printf("ft_bzero after %d = %d\n", i, str[i]);
// 		printf("bzero after %d = %d\n", i, str2[i]);
// 	}
// }
