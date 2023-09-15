#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

int	main(int ac, char **av)
{
	(void)ac;
	char dest1[100];
	char dest2[100];
	printf("%ld\n", ft_strlcpy(dest1, av[1], atoi(av[2])));
	printf("%s\n", dest1);
	printf("%ld\n", strlcpy(dest2, av[1], atoi(av[2])));
	printf("%s\n", dest2);
}