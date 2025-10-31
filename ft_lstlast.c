/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 01:50:29 by akouiss           #+#    #+#             */
/*   Updated: 2025/10/27 16:57:53 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int main()
// {
//        t_list *lst;
//     t_list *new;
//     t_list *add;

//     // lst = NULL;
//     lst = ft_lstnew("khalid");
//     new = ft_lstnew("achraf");
//     add = ft_lstnew("mohammed");
//     ft_lstadd_front(&lst, new);
//     ft_lstadd_front(&lst, add);

//     t_list *test;

//     test = ft_lstlast(lst);
//     printf("%s\n", (char *) test->content);
// }