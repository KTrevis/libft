/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_copy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 10:28:15 by ketrevis          #+#    #+#             */
/*   Updated: 2023/09/09 10:57:25 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;
	size_t			i;

	i = 0;
	tmp_dest = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	while (i < n)
	{
		if (tmp_src[i] == c)
			return (dest);
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	return (dest);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;
	size_t			i;

	i = 0;
	tmp_dest = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	while (i < n)
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	*tmp_src;
	char	*tmp_dst;

	i = 0;
	tmp_src = (char *)src;
	tmp_dst = (char *)dest;
	if (tmp_src == NULL || tmp_dst == NULL)
		return (NULL);
	if (tmp_dst > tmp_src)
	{
		while (n-- > 0)
			tmp_dst[n] = tmp_src[n];
		return (dest);
	}
	while (i++ < n)
		tmp_dst[i] = tmp_src[i];
	return (dest);
}
