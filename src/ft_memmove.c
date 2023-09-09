/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 12:40:08 by ketrevis          #+#    #+#             */
/*   Updated: 2023/09/09 14:51:37 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
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
