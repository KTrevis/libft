#include <stdio.h>
#include "libft.h"

int main(int ac, char **av)
{
	(void)ac;
    char *str = ft_strdup(av[1]);
    printf("%s\n", str);
	free(str);
}