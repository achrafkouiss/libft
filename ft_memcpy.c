/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 00:27:22 by akouiss           #+#    #+#             */
/*   Updated: 2025/10/31 04:51:41 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest || !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

// int main()
// {
//     char    dest[] = "achraf kouiss";
//     char    dest1[] = "achraf kouiss";
//     char    dest2[] = "achraf kouiss";
//     char    dest21[] = "achraf kouiss";
//     char    dest3[] = "achraf kouiss";

//     ft_memcpy(&dest[2], &dest[0], 6);
//     ft_memcpy(&dest1[0], &dest1[2], 6);
//     ft_memcpy(&dest2[0], &dest2[8], 6);
//     ft_memcpy(&dest21[0], &dest21[8], 5);
//     ft_memcpy(&dest3[8], &dest3[0], 6);
//     printf("dest[2] to dest[0] = %s\n", dest);
//     printf("dest1[0] to dest1[2] = %s\n", dest1);
//     printf("dest2[0] to dest2[8] = %s\n", dest2);
//     printf("dest21[0] to dest21[8] = %s\n", dest21);
//     printf("dest3[8] to dest3[0] = %s\n", dest3);
//     printf("----------------------------------------\n");
//     printf("----------------------------------------\n");
//     printf("----------------------------------------\n");
//     char    ddest[] = "achraf kouiss";
//     char    ddest1[] = "achraf kouiss";
//     char    ddest2[] = "achraf kouiss";
//     char    ddest21[] = "achraf kouiss";
//     char    ddest3[] = "achraf kouiss";

//     ft_memcpy(&ddest[2], &ddest[0], 6);
//     ft_memcpy(&ddest1[0], &ddest1[2], 6);
//     ft_memcpy(&ddest2[0], &ddest2[8], 6);
//     ft_memcpy(&ddest21[0], &ddest21[8], 5);
//     ft_memcpy(&ddest3[8], &ddest3[0], 6);
//     printf("dest[2] to dest[0] = %s\n", dest);
//     printf("dest1[0] to dest1[2] = %s\n", dest1);
//     printf("dest2[0] to dest2[8] = %s\n", dest2);
//     printf("dest21[0] to dest21[8] = %s\n", dest21);
//     printf("dest3[8] to dest3[0] = %s\n", dest3);
// }