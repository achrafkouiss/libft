/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:06:41 by akouiss           #+#    #+#             */
/*   Updated: 2025/10/27 16:59:44 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_isprint(32));
	printf("%d\n", ft_isprint(50));
	printf("%d\n", ft_isprint(100));
	printf("%d\n", ft_isprint(126));
	printf("%d\n", ft_isprint(127));
}
*/
