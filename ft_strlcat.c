/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:29:12 by ketrevis          #+#    #+#             */
/*   Updated: 2023/09/15 10:39:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	i = ft_strlen(dst);
	j = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
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
	return (dst_len + src_len + 1);
}
