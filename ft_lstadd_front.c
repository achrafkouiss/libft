/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 00:15:28 by akouiss           #+#    #+#             */
/*   Updated: 2025/10/27 16:59:51 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main()
// {
//     t_list *lst;
//     t_list *new;
//     t_list *add;

//     new = ft_lstnew("achraf");
//     lst = ft_lstnew("khalid");
//     add = ft_lstnew("mohammed");
//     ft_lstadd_front(&lst, new);
//     ft_lstadd_front(&lst, add);

//     while (lst->next)
//     {
//         printf("%s\n", (char *)lst->content);
//         lst = lst->next;
//     }
//     printf("%s\n", (char *)lst->content);

// }