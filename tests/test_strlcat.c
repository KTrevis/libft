#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

int	main(int ac, char **av)
{
	(void)ac;
	char *src = av[1];
	char dest1[100] = "ceci est un test ";
	char dest2[100] = "ceci est un test ";
	printf("%ld\n", ft_strlcat(dest1, src, atoi(av[2])));
	printf("%s\n", dest1);
	printf("%ld\n", strlcat(dest2, src, atoi(av[2])));
	printf("%s\n", dest2);
}