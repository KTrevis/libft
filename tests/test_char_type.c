#include <libft.h>
#include <stdio.h>

int main(int ac, char **av)
{
	(void)ac;
    printf("isalpha : %d\n", ft_isalpha(av[1][0]));
    printf("isdigit : %d\n", ft_isdigit(av[1][0]));
    printf("isalnum : %d\n", ft_isalnum(av[1][0]));
    printf("isascii : %d\n", ft_isascii(av[1][0]));
    printf("isprint : %d\n", ft_isprint(av[1][0]));
}