/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:13:07 by akouiss           #+#    #+#             */
/*   Updated: 2025/10/27 14:12:48 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('z'));
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('Z'));
	printf("%d\n", ft_isalpha('g'));
	printf("%d\n", ft_isalpha(70));
	printf("%d\n", ft_isalpha(100));
	printf("%d\n", ft_isalpha(32));
	printf("%d\n", ft_isalpha(10));
	printf("%d\n", ft_isalpha(' '));
}
*/
