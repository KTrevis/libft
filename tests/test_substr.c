#include <stdio.h>
#include "libft.h"

int	main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_substr(av[1], atoi(av[2]), atoi(av[3])));
}