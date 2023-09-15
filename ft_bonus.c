/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:22:10 by marvin            #+#    #+#             */
/*   Updated: 2023/09/15 17:02:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->content = content;
	return (new);
}

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}


int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*curr;

	curr = ft_lstlast(*alst);
	if (!curr)
		*alst = new;
	curr->next = new;
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (*lst != NULL)
	{
		del((*lst)->content);
		ft_lstclear(&((*lst)->next), (*del));
		free(*lst);
	}
	*lst = NULL;
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

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

//------------------------

void	f(void *content)
{
	char	*tmp;
	
	tmp = (char *)content;
	*tmp += 1;
}

void	*f2(void *content)
{
	char	*tmp;
	
	tmp = (char *)content;
	*tmp += 1;
	return (content);
	return (content);
}

int main(void)
{
	t_list *head = ft_lstnew((void *)ft_strdup("10"));
	ft_lstadd_front(&head, ft_lstnew((void *)ft_strdup("5")));
	ft_lstadd_back(&head, ft_lstnew((void *)ft_strdup("-12")));
	//ft_lstiter(head, f);
	
	t_list *map = ft_lstmap(head, f2, NULL);
	while (map != NULL)
	{
		printf("%s\n", (char *)map->content);
		map = map->next;
	}
	return (0);
}
