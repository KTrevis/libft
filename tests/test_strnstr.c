#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_strnstr(av[1], av[2], atoi(av[3])));
	printf("%s\n", strnstr(av[1], av[2], atoi(av[3])));
}