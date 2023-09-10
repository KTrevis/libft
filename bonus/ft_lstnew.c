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

void ft_lstadd_front(t_list **alst, t_list *new)
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

int main(int ac, char **av)
{
	t_list *head = ft_lstnew((void *)10);
	for (int i = 0; i < 10; i++) {
		int *value = malloc(sizeof(int));
		*value = i;
		t_list *new = ft_lstnew(value);
		ft_lstadd_front(&head, new);
	}

	t_list *current = head;
	while (current->next != NULL)
	{
		printf("%d\n", *((int *)current->content));
		current = current->next;
	}
	printf("%d\n", ft_lstsize(head));

	printf("test");
	return (0);
}
