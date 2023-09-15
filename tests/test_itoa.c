#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	(void)ac;
    printf("%s\n", ft_itoa(atoi(av[1])));
}