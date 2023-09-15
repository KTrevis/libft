#include <stdio.h>
#include "libft.h"

static void	f(unsigned int i, char *c)
{
	(void)i;
	*c = ft_toupper(*c);
}

int	main(int ac, char **av)
{
	(void)ac;
	ft_striteri(av[1], f);
	printf("%s\n", av[1]);
}