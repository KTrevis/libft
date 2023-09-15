#include <stdio.h>
#include <bsd/string.h>
#include "libft.h"

int	main(int ac, char **av)
{
	(void)ac;
	printf("%p\n", ft_strnstr(av[1], av[2], atoi(av[3])));
	printf("%p\n", strnstr(av[1], av[2], atoi(av[3])));
}