/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 09:53:54 by ketrevis          #+#    #+#             */
/*   Updated: 2023/09/16 09:55:21 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(int ac, char **av)
{
	(void)ac;
	char **strs = ft_split(av[1], av[2][0]);
	for (int i = 0; strs[i] != NULL; i++)
		printf("%s\n", strs[i]);
	int i = 0;
	while (strs[i++] != NULL)
		free(strs[i]);
	free(strs[i]);
}
