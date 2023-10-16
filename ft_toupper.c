/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:28:52 by ketrevis          #+#    #+#             */
/*   Updated: 2023/10/16 19:28:53 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	unsigned char	n;

	n = (unsigned char)c;
	if ((n < 'a' || n > 'z'))
		return (n);
	return (n - 32);
}
