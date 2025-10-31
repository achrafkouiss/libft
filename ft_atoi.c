/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:20:48 by akouiss           #+#    #+#             */
/*   Updated: 2025/10/31 05:04:39 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	unsigned int	i;
	int				sign;
	long			nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nbr = nbr * 10 + (nptr[i] - '0');
		i++;
	}
	return ((int)(nbr * sign));
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	printf("ft_atoi = %d\n", ft_atoi("   \n -1478dvc4"));
// 	printf("atoi = %d\n", atoi("   \n -1478dvc4"));
// 	printf("xxxxxxxxxxxxxxxxxxxxxx\n");
// 	printf("ft_atoi = %d\n", ft_atoi("   \n 1478dvc4"));
// 	printf("atoi = %d\n", atoi("   \n 1478dvc4"));
// 	printf("xxxxxxxxxxxxxxxxxxxxxx\n");
// 	printf("ft_atoi = %d\n", ft_atoi("   \n ++++1478dvc4"));
// 	printf("atoi = %d\n", atoi("   \n +++++1478dvc4"));
// 	printf("xxxxxxxxxxxxxxxxxxxxxx\n");
// 	printf("ft_atoi = %d\n", ft_atoi("   \n 0"));
// 	printf("atoi = %d\n", atoi("   \n 0"));
// 	printf("xxxxxxxxxxxxxxxxxxxxxx\n");
// 	printf("ft_atoi = %d\n", ft_atoi("   \n ---1478dvc4"));
// 	printf("atoi = %d\n", atoi("   \n ---1478dvc4"));
// 	printf("xxxxxxxxxxxxxxxxxxxxxx\n");
// 	printf("ft_atoi = %d\n", ft_atoi("   \n 1"));
// 	printf("atoi = %d\n", atoi("   \n 1"));
// 	printf("xxxxxxxxxxxxxxxxxxxxxx\n");
// 	printf("ft_atoi = %d\n", ft_atoi("   \n -1"));
// 	printf("atoi = %d\n", atoi("   \n -1"));
// 	printf("xxxxxxxxxxxxxxxxxxxxxx\n");
// 	printf("ft_atoi = %d\n", ft_atoi("   \n -2147483648"));
// 	printf("xxxxxxxxxxxxxxxxxxxxxx\n");
// 	printf("atoi = %d\n", atoi("   \n -2147483648"));
// 	printf("xxxxxxxxxxxxxxxxxxxxxx\n");
// }
