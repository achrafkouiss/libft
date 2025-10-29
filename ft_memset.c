/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:18:40 by akouiss           #+#    #+#             */
/*   Updated: 2025/10/28 13:12:03 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// void    *ft_memset2(void *s, int c, size_t n)
// {
//     char   *p;
//     size_t  i;

//     p = (char *) s;
//     i = 0;
//     while (i < n)
//     {
//         p[i] = (char)c;
//         i++;
//     }
//     return (s);
// }
//
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// #include <stdlib.h>

// int main()
// {
//  		char buf[3];
// 	ft_memset(buf, (unsigned int)1, 4);
// 	printf("%u %u %u\n", buf[0], buf[1], buf[2]);
// }

// #include <stdio.h>
// int main(void)
// {
//     if ((char)-1 == -1)
//         printf("char is signed\n");
//     else
//         printf("char is unsigned\n");
// }
//
//
// // ----------------------------------------
// // Helper function to print buffer
//   content in multiple formats
// // -----------------------------------------
// void print_buffer(const char *label, void *buf, size_t n)
// {
//     size_t i;
//     unsigned char *u = (unsigned char *)buf;
//     char *s = (char *)buf;
//
//     printf("%-12s | ", label);
//     for (i = 0; i < n; i++)
//         printf("%4d ", s[i]); // print as signed char
//     printf(" | ");
//     for (i = 0; i < n; i++)
//         printf("%4u ", u[i]); // also print as unsigned for comparison
//     printf("\n");
// }
// // --------------------------------------
// // Main test routine
// // --------------------------------------
// int main(void)
// {
//     unsigned char values[] = {0, 65, 127, 128, 200, 255};
//     size_t nvalues = sizeof(values) / sizeof(values[0]);
//     size_t len = 8;
//     unsigned char *a, *b, *c;
//
//     printf("-----------------------------------------\n");
//     printf("Comparison of memset()
//          , ft_memset(), and ft_memset2()\n");
//     printf("---------------------------------------\n\n");
//
//     for (size_t v = 0; v < nvalues; v++)
//     {
//         unsigned char val = values[v];
//         a = calloc(len, sizeof(unsigned char));
//         b = calloc(len, sizeof(unsigned char));
//         c = calloc(len, sizeof(unsigned char));
//
//         memset(a, val, len);
//         ft_memset(b, val, len);
//         ft_memset2(c, val, len);
//
//         printf("Test #%zu: c = %3d (0x%02X)\n", v + 1, val, val);
//         print_buffer("memset", a, len);
//         print_buffer("ft_memset", b, len);
//         print_buffer("ft_memset2", c, len);
//         printf("-----------------------------------\n");
//
//         free(a);
//         free(b);
//         free(c);
//     }
//
//     return (0);
// }