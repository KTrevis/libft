/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 09:57:11 by ketrevis          #+#    #+#             */
/*   Updated: 2023/09/16 09:57:33 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static void	f(unsigned int i, char *c)
{
	(void)i;
	*c = ft_toupper(*c);
}

int	main(int ac, char **av)
{
	(void)ac;
	ft_striteri(av[1], f);
	printf("%s\n", av[1]);
}
