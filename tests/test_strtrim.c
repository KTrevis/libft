#include <stdio.h>
#include "libft.h"

int	main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_strtrim(av[1], av[2]));
}