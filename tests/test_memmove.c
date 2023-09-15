#include <stdio.h>
#include "libft.h"

int main(int ac, char **av)
{
	(void)ac;
    char src[] = "ceci est un test";
    char *dest = src - 1;

    ft_memmove(dest, src, 10);
    printf("%s\n", dest);
}