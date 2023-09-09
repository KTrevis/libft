/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings_manip.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:08:49 by ketrevis          #+#    #+#             */
/*   Updated: 2023/09/08 21:01:25 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen((char *)src));
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	i = ft_strlen(dst);
	j = 0;
	src_len = ft_strlen((char *)src);
	dst_len = ft_strlen((char *)dst);
	if (i >= size)
		return (size + src_len);
	if (src_len < size - i)
	{
		while (src[j])
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	else 
	{
		while (src[j] && j < size - dst_len - 1)
			dst[i++] = src[j++];
	}
	return (dst_len + src_len);
}

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;
	int		s_len;

	s_len = ft_strlen((char *)s);
	dup = malloc((s_len + 1) * sizeof(char));
	i = 0;
	while (i < s_len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
