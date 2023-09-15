#include <stdio.h>
#include "libft.h"

int	main(int ac, char **av)
{
	(void)ac;
	char *str = ft_strtrim(av[1], av[2]);
	printf("%s\n", str);
	free(str);
}