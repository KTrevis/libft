#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = s;
	while (n > 0)
	{
		*tmp = (unsigned char)c;
		tmp++;
		n--;
	}
	return (s);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp;
	size_t	i;

	i = 0;
	tmp = (unsigned char *)s;
	while (i < n)
	{
		tmp[i] = '\0';
		i++;
	}
}


