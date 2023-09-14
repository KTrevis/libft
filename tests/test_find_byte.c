#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    printf("strchr : %d\n", ft_strchr(av[1], av[2][0]) == strchr(av[1], av[2][0]));
    printf("strrchr : %d\n", ft_strrchr(av[1], av[2][0]) == strrchr(av[1], av[2][0]));
    printf("memchr : %d\n", ft_memchr(av[1], av[2][0], atoi(av[3])) == memchr(av[1], av[2][0], atoi(av[3])));
}