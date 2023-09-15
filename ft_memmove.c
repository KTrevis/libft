/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 12:40:08 by ketrevis          #+#    #+#             */
/*   Updated: 2023/09/15 13:14:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp_src;
	char	*tmp_dst;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	tmp_src = (char *) src;
	tmp_dst = (char *) dest;
	i = 0;
	if (tmp_dst > tmp_src)
		while (n-- > 0)
			tmp_dst[n] = tmp_src[n];
	else
	{
		while (i++ < n)
			tmp_dst[i] = tmp_src[i];
	}
	return (dest);
}
