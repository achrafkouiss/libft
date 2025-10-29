/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:04:08 by akouiss           #+#    #+#             */
/*   Updated: 2025/10/28 11:37:32 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*change(void *content)
{
	((char *)content)[0] = ((char *)content)[0] - 32;
	return (content);
}

// void	*itter(t_list lst)
// {
// 	if (lst)
// 	{
// 		(*f)(lst->content);
// 		lst = lst->next;
// 	}
// }

void	delete(void *content)
{
	free(content);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*current;

	ft_lstiter(lst, (*f)(lst->content));
	head = ft_lstnew(lst->content);
	if (!head)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		current = ft_lstnew(lst->content);
		if (!current)
		{
			ft_lstclear(&head, (*del)(head->content));
			return (NULL);
		}
		lst = lst->next;
	}
	return (head);
}

#include <stdio.h>

int	main(void)
{
	char *arr[] = {"achraf", "kouiss", "mohammed", "hind"};
	t_list *node;
	t_list *head;
	
	node = ft_lstnew(arr[0]);
	head = node;
	for (int i = 1; i < 4; i++)
		ft_lstadd_back(&node, ft_lstnew(arr[i]));
	while(node)
	{
		printf("%s\n", (char *)node->content);
		node = node->next;
	}
	ft_lstmap(node, change, delete);
}