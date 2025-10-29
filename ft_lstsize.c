/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 01:25:56 by akouiss           #+#    #+#             */
/*   Updated: 2025/10/27 17:00:11 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

// int main()
// {
//     t_list *lst;
//     // t_list *new;
//     // t_list *add;

//     lst = NULL;
//     // lst = ft_lstnew("khalid");
//     // new = ft_lstnew("achraf");
//     // add = ft_lstnew("mohammed");
//     // ft_lstadd_front(&lst, new);
//     // ft_lstadd_front(&lst, add);

//     printf("%d\n", ft_lstsize(lst));
// }