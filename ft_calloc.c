/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:46:21 by akouiss           #+#    #+#             */
/*   Updated: 2025/10/28 13:13:25 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	arr_size;
	char	*new_arr;

	arr_size = size * nmemb;
	new_arr = malloc(arr_size);
	ft_memset(new_arr, 0, arr_size);
	return (new_arr);
}

// int main()
// {
//     char    *p;

//     p = ft_calloc(3, 4);
//     for (int  i = 0; i < 3; i++)
//         printf("p[%d] = %d\n", i, p[i]);
// }