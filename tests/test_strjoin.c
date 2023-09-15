#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	char *str = ft_strjoin(av[1], av[2]);
	printf("%s", str);
	free(str);
}