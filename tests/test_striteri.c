#include "libft.h"
#include <stdio.h>

static void	f(unsigned int i, char *c)
{
	(void)i;
	ft_toupper(*c);
}

int	main(int ac, char **av)
{
	(void)ac;
	ft_striteri(av[1], f);
	printf("%s\n", av[1]);
}