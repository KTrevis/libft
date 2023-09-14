#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int main(int ac, char **av)
{
    char *src = av[1];
    size_t size = (strlen(src) + 1);
    char *dest1 = malloc(size * sizeof(char));
    char *dest2 = malloc(size * sizeof(char));

    ft_memcpy(dest1, src, atoi(av[2]));
    memcpy(dest2, src, atoi(av[2]));

    printf("%s\n", dest1);
    printf("%s\n", dest2);

    free(dest1);
    free(dest2);

    dest1 = malloc(size * sizeof(char));
    dest2 = malloc(size * sizeof(char));
    ft_bzero(dest1, size);
    ft_bzero(dest2, size);

    ft_memccpy(dest1, src, atoi(av[2]), atoi(av[3]));
    memccpy(dest2, src, atoi(av[2]), atoi(av[3]));

    printf("%s\n", dest1);
    printf("%s\n", dest2);
}