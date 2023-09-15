#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(int ac, char **av)
{
	(void)ac;
	char *str = ft_itoa(atoi(av[1]));
    printf("%s\n", str);
	free(str);
}