/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:05:26 by akouiss           #+#    #+#             */
/*   Updated: 2025/10/31 18:36:38 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_arr_size(int n)
{
	size_t	count;

	count = 0;
	if (n < 0)
	{
		n = n * -1;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	ft_allo_arr(char *arr, int n, int len)
{
	if (len < 0 || arr[len] == '-')
		return ;
	ft_allo_arr(arr, n / 10, len - 1);
	arr[len] = (n % 10) + '0';
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*new_arr;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	len = ft_arr_size(n) + 1;
	new_arr = malloc(len);
	if (!new_arr)
		return (NULL);
	new_arr[len - 1] = '\0';
	if (n < 0)
	{
		n = n * -1;
		new_arr[0] = '-';
	}
	ft_allo_arr(new_arr, n, len - 2);
	return (new_arr);
}
