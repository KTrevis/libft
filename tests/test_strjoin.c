#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	printf("%s", ft_strjoin(av[1], av[2]));
}