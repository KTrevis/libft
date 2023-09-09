#include "libft.h"

int	ft_atoi(char *str)
{
	int	n;
	int	sign;

	n = 0;
	sign = 1;
	while (*str && ((*str >= 9 && *str <= 13) || *str == ' '))
		str++;
	if (*str == '-')
	{
		sign = -sign;
		str++;
	}
	if (*str == '+')
		str++;
	while (*str && *str >= '0' && *str <= '9')
	{
		n = n * 10 + *str - '0';
		str++;
	}
	return (n * sign);
}
