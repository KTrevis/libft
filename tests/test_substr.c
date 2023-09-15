#include <stdio.h>
#include "libft.h"

int	main(int ac, char **av)
{
	(void)ac;
	char *str = ft_substr(av[1], ft_atoi(av[2]), ft_atoi(av[3]));
	printf("%s\n", str);
	free(str);
}