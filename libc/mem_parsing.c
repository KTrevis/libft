/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_parsing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 21:15:24 by ketrevis          #+#    #+#             */
/*   Updated: 2023/09/09 10:41:34 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = s;
	while (n > 0)
	{
		*tmp = (unsigned char)c;
		tmp++;
		n--;
	}
	return (s);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp;
	size_t	i;

	i = 0;
	tmp = (unsigned char *)s;
	while (i < n)
	{
		tmp[i] = '\0';
		i++;
	}
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	const unsigned char	*tmp;

	i = 0;
	tmp = s;
	while (i < n)
	{
		if (tmp[i] == (unsigned char)c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;
	
	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (!arr)
		return (arr);
	ft_bzero(arr, size);
	return (arr);
}
