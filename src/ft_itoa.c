#include "libft.h"
#include <stdio.h>

static int	nbr_len(int n)
{
	int	size;

	size = 1;
	if (n < 0)
	{
		n = -n;
		size++;
	}
	while (n >= 10)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	int	i;

	i = nbr_len(n);
	str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
	{
		str[i] = '0';
		return (str);
	}
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	while (i >= 0 && n > 0)
	{
		str[i] = n % 10 + 48;
		n /= 10;
		i--;
	}
	return (str);
}
