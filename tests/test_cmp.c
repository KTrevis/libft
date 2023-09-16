/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_cmp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 09:53:03 by ketrevis          #+#    #+#             */
/*   Updated: 2023/09/16 09:53:04 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int main(int ac, char **av)
{
	(void)ac;
	printf("ft_memcmp : %d\n", ft_memcmp(av[1], av[2], atoi(av[3])));
	printf("memcmp : %d\n", memcmp(av[1], av[2], atoi(av[3])));
	printf("ft_strncmp : %d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
	printf("strncmp : %d\n", strncmp(av[1], av[2], atoi(av[3])));
}
