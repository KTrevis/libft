#include "libft.h"

static int	not_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (0);
		set++;
	}
	return (1);
}

static size_t	get_size(char const *s1, char const *set)
{
	size_t	size;

	size = 0;
	while (*s1)
	{
		if (not_in_set(*s1, set))
			size++;
		s1++;
	}
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int	i;

	i = 0;
	str = malloc((get_size(s1, set) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (*s1)
	{
		if (not_in_set(*s1, set))
		{
			str[i] = *s1;
			i++;
		}
		s1++;
	}
	return (str);
}
