/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:13:41 by akouiss           #+#    #+#             */
/*   Updated: 2025/10/27 14:12:52 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/*
int	main()
{
	printf("%d\n", ft_isalnum('0'));
	printf("%d\n", ft_isalnum('9'));
	printf("%d\n", ft_isalnum(50));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('z'));
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum('Z'));
	printf("%d\n", ft_isalnum('g'));
	printf("%d\n", ft_isalnum(70));
	printf("%d\n", ft_isalnum(100));
	printf("%d\n", ft_isalnum(32));
	printf("%d\n", ft_isalnum(10));
	printf("%d\n", ft_isalnum(' '));
}
*/
