#include "libft.h"
#include <stdio.h>

int main(int ac, char **av)
{
	(void)ac;
    printf("toupper : %c\n", ft_toupper(av[1][0]));
    printf("tolower : %c\n", ft_tolower(av[1][0]));
}