/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:13:14 by akouiss           #+#    #+#             */
/*   Updated: 2025/10/27 16:59:48 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

// int main()
// {
//     t_list  *new;
//     t_list  *lst;
//     t_list  *node1;
//     t_list  *node2;
//     t_list  *new2;

//      lst = ft_lstnew("achraf");
// 	//lst = NULL;
//     new = ft_lstnew("kouiss");
//     node1 = ft_lstnew("mohammed");
//     node2 = ft_lstnew("kouiss");
//     new2 = ft_lstnew("hind");

//     // ft_lstadd_front(&node2, node1);
//     // ft_lstadd_front(&node1, new);
//     // ft_lstadd_front(&new, lst);
//     // ft_lstadd_back(&lst, new2);
//     ft_lstadd_back(&lst, new);
//     ft_lstadd_back(&lst, node1);
//     ft_lstadd_back(&lst, node2);
//     ft_lstadd_back(&lst, new2);

//     while (lst)
//     {
//         printf("%s\n", (char *) lst->content);
//         lst = lst->next;
//     }
// }