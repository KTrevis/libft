/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:28:52 by ketrevis          #+#    #+#             */
/*   Updated: 2023/10/17 18:22:17 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	unsigned char	n;
	
	if (c > 255 || c < -128 || c == -1)
		return (c);
	n = (unsigned char)c;
	if (n >= 'a' && n <= 'z')
		return (n - 32);
	return (n);
}
