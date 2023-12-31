/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:14:52 by ketrevis          #+#    #+#             */
/*   Updated: 2023/10/31 12:22:30 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	unsigned char	n;

	if (c > 255 || c < -128 || c == -1)
		return (c);
	n = (unsigned char)c;
	if (n >= 'A' && n <= 'Z')
		return (n + 32);
	return (n);
}
