#include <stdio.h>
#include "libft.h"

int main(int ac, char **av)
{
	(void)ac;
    char **strs = ft_split(av[1], av[2][0]);
    for (int i = 0; strs[i] != NULL; i++)
        printf("%s\n", strs[i]);
}