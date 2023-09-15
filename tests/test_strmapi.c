#include "libft.h"
#include <stdio.h>

char	f(unsigned int i, char c)
{
	(void)i;
	return (ft_toupper(c));
}

int	main(int ac, char **av)
{
	(void)ac;
	char *str = ft_strmapi(av[1], f);
	printf("%s\n", str);
}