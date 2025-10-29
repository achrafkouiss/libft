/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:49:30 by akouiss           #+#    #+#             */
/*   Updated: 2025/10/27 16:59:41 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
int     main()
{
        printf("%d\n", ft_isdigit('0'));
        printf("%d\n", ft_isdigit('2'));
        printf("%d\n", ft_isdigit('9'));
        printf("%d\n", ft_isdigit(48));
        printf("%d\n", ft_isdigit(50));
        printf("%d\n", ft_isdigit(70));
        printf("%d\n", ft_isdigit(100));
        printf("%d\n", ft_isdigit(32));
        printf("%d\n", ft_isdigit(10));
        printf("%d\n", ft_isdigit(' '));
}
*/
