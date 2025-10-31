/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:12:33 by akouiss           #+#    #+#             */
/*   Updated: 2025/10/31 04:38:03 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*s;

// 	s = "achraf kouiss";
// 	printf("%p\n", ft_strchr(s, '\0'));
// 	printf("%p\n", &s[13]);
// 	printf("%c\n", *ft_strchr(s, '\0'));
// }
