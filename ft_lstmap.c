/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akouiss <akouiss@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 01:16:05 by akouiss           #+#    #+#             */
/*   Updated: 2025/10/31 04:30:14 by akouiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// void	*upper(void *content)
// {
// 	char *p;
// 	int	i;
// 	if (!content)
// 		return(NULL);
// 	p = ft_strdup(content);
// 	i = 0;
// 	while (p[i])
// 	{
// 		if (p[i] >= 'a' && p[i] <= 'z')
// 			p[i] = p[i] - 32;
// 		i++;
// 	}
// 	return (p);
// }

// void	del(void *content)
// {
// 	free(content);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new_node);
		lst = lst->next;
	}
	return (head);
}

// int	main()
// {
// 	char	*a[] = {"achraf", "kouiss", "najia", "mohammed"};
// 	t_list 	*b = ft_lstnew(a[0]);
// 	t_list *head = b;
// 	t_list *head2 = b;
// 	t_list	*c;

// 	for (int i = 1; i < 4; i++)
// 	{
// 		printf("a[%d] = %s\n", i, a[i]);
// 		ft_lstadd_back(&b, ft_lstnew(a[i]));
// 		b = b->next;
// 	}
// 	while (head)
// 	{
// 		printf("%s\n", (char *) head->content);
// 		head = head->next;
// 	}
// 	printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
// 	printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
// 	printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
// 	printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
// 	c = ft_lstmap(head2, upper, del);
// 	while (c)
// 	{
// 		printf("%s\n", (char *) c->content);
// 		c = c->next;
// 	}
// }