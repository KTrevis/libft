/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpys.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 10:00:14 by ketrevis          #+#    #+#             */
/*   Updated: 2023/09/16 10:01:40 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int	main(int ac, char **av)
{
	(void)ac;
	char *src = av[1];
	size_t size = (strlen(src) + 1);
	char *dest1 = malloc(size * sizeof(char));
	char *dest2 = malloc(size * sizeof(char));

	ft_memcpy(dest1, src, atoi(av[2]));
	memcpy(dest2, src, atoi(av[2]));

	printf("%s\n", dest1);
	printf("%s\n", dest2);
}
