#include <stdio.h>
#include "libft.h"

int main(int ac, char **av)
{
	(void)ac;
	ft_putchar_fd(av[1][0], 1);
	ft_putstr_fd(av[1], 1);
	ft_putendl_fd(av[1], 1);
	ft_putnbr_fd(123, 1);
}