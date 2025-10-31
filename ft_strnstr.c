/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:18:12 by akouiss           #+#    #+#             */
/*   Updated: 2025/10/31 04:51:48 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big || !little)
		return (NULL);
	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	j = 0;
	while (i < len && big[i])
	{
		j = 0;
		while ((big[i + j] == little[j]) && little[j] && (i + j < len))
			j++;
		if (!little[j])
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char	big[] = "achraf kouiss";
	char	little[] = "koui";
	size_t	len;

	len = 12;
	printf("big[7] = %p\n", &big[7]);
	printf("ft_strnstr = %p\n", ft_strnstr(big, little, len));
	printf("strnstr = %p\n", strnstr(big, little, len));
}
*/