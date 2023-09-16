/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 09:59:09 by ketrevis          #+#    #+#             */
/*   Updated: 2023/09/16 09:59:09 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(int ac, char **av)
{
	(void)ac;
	char *str = ft_substr(av[1], ft_atoi(av[2]), ft_atoi(av[3]));
	printf("%s\n", str);
	free(str);
}
