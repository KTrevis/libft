#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int main(int ac, char **av)
{
	printf("ft_memcmp : %d\n", ft_memcmp(av[1], av[2], atoi(av[3])));
	printf("memcmp : %d\n", memcmp(av[1], av[2], atoi(av[3])));
	printf("ft_strncmp : %d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
	printf("strncmp : %d\n", strncmp(av[1], av[2], atoi(av[3])));
}