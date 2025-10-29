/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:41:18 by akouiss           #+#    #+#             */
/*   Updated: 2025/10/27 14:12:58 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int     main()
{
        printf("%d\n", ft_isascii('0'));
        printf("%d\n", ft_isascii('2'));
        printf("%d\n", ft_isascii('9'));
        printf("%d\n", ft_isascii(48));
        printf("%d\n", ft_isascii(50));
        printf("%d\n", ft_isascii(70));
        printf("%d\n", ft_isascii(100));
        printf("%d\n", ft_isascii(32));
        printf("%d\n", ft_isascii(10));
        printf("%d\n", ft_isascii(' '));
        printf("%d\n", ft_isascii(0));
        printf("%d\n", ft_isascii(150));
        printf("%d\n", ft_isascii(200));
        printf("%d\n", ft_isascii(235));
}
*/
