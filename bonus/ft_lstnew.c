/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:22:10 by marvin            #+#    #+#             */
/*   Updated: 2023/09/11 15:01:51 by marvin           ###   ########.fr       */
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

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*curr;

	curr = *alst;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new;
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
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (del)
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

}

//------------------------

void	delete(void *content)
{
	free(content);
}

int main(int ac, char **av)
{
	int *val = malloc(sizeof(int));
	*val = 10;
	t_list *head = malloc(sizeof(t_list));
	head->content = (void *)val;
	head->next = NULL;

	for (int i = 0; i < 10; i++)
	{
		int *val = malloc(sizeof(int));
		*val = i;
		t_list *new = malloc(sizeof(t_list));
		new->content = (void *)val;
		ft_lstadd_front(&head, new);
	}

	t_list *last = ft_lstlast(head);

	for (int i = 11; i < 20; i++)
	{
		int *val = malloc(sizeof(int));
		*val = i;
		t_list *new = malloc(sizeof(t_list));
		new->content = (void *)val;
		ft_lstadd_back(&head, new);
	}

	//ft_lstclear(&last, delete);

	t_list *curr = head;
	while (curr != NULL)
	{
		printf("%d\n", *(int *)(curr->content));
		curr = curr->next;
	}

	return (0);
}
