/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 09:45:30 by ketrevis          #+#    #+#             */
/*   Updated: 2023/10/16 19:36:37 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*curr;

	if (!lst || !f || !del)
		return (NULL);
	head = ft_lstnew(f(lst->content));
	curr = head;
	while (lst->next != NULL)
	{
		if (del)
			del(lst->content);
		lst = lst->next;
		curr->next = ft_lstnew(f(lst->content));
		curr = curr->next;
	}
	return (head);
}
