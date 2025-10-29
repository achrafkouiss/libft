/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 03:42:46 by akouiss           #+#    #+#             */
/*   Updated: 2025/10/27 17:00:40 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print_digits(int nb, int fd)
{
	if (nb < 1)
		return ;
	ft_print_digits(nb / 10, fd);
	ft_putchar_fd(nb % 10 + '0', fd);
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else if (nb == 0)
	{
		write(fd, "0", 1);
	}
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	ft_print_digits(nb, fd);
}

// int main()
// {
//     ft_putnbr_fd(0, 1);
//     printf("\n");
// }