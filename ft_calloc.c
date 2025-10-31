/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:46:21 by akouiss           #+#    #+#             */
/*   Updated: 2025/10/31 20:07:56 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	arr_size;
	char	*new_arr;

	if (!nmemb || !size)
		return (malloc(1));
	if ((size_t)-1 / size < nmemb)
		return (NULL);
	arr_size = size * nmemb;
	new_arr = malloc(arr_size);
	ft_bzero(new_arr, arr_size);
	return (new_arr);
}
