#include "libft.h"

static int	is_substr(const char *big, const char *little)
{
	size_t	i;

	i = 0;
	while (big[i] && big[i] == little[i])
		i++;
	return (ft_strlen(big) == i);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	while (big[i] && i < len)
	{
		if (is_substr(&big[i], little))
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
