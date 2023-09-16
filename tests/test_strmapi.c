/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 09:57:37 by ketrevis          #+#    #+#             */
/*   Updated: 2023/09/16 09:58:46 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	f(unsigned int i, char c)
{
	(void)i;
	return (ft_toupper(c));
}

int	main(int ac, char **av)
{
	char	*str;

	(void)ac;
	str = ft_strmapi(av[1], f);
	printf("%s\n", str);
}
