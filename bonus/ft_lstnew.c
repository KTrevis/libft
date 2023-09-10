/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 19:00:38 by ketrevis          #+#    #+#             */
/*   Updated: 2023/09/10 17:11:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*curr;

	curr = malloc(sizeof(t_list));
	curr->next = NULL;
	curr->content = content;
	return (curr);
}

void ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = 
}