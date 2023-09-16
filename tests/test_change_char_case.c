/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_change_char_case.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 09:53:08 by ketrevis          #+#    #+#             */
/*   Updated: 2023/09/16 09:53:13 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(int ac, char **av)
{
	(void)ac;
	printf("toupper : %c\n", ft_toupper(av[1][0]));
	printf("tolower : %c\n", ft_tolower(av[1][0]));
}
