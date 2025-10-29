/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 04:02:56 by akouiss           #+#    #+#             */
/*   Updated: 2025/10/28 13:14:26 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char     ft(unsigned int i, char c)
// {
//     if ((i % 2) == 0)
//         c = 'a';
//     return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	size;
	char	*new_arr;

	i = 0;
	size = ft_strlen(s) + 1;
	new_arr = malloc(size);
	if (!new_arr)
		return (NULL);
	while (s[i])
	{
		new_arr[i] = (*f)(i, s[i]);
		i++;
	}
	new_arr[i] = '\0';
	return (new_arr);
}

// int main()
// {
//     printf("%s\n", ft_strmapi("kouiss mohammed", ft));
// }