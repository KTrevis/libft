#include "libft.h"
#include <stdio.h>

static int	count_words(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}

static char	*new_word(char const *s, char c)
{
	int	i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = malloc((i + 1) * sizeof(char));
	i = 0;
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char **strs;
	int	i;
	int	j;

	strs = malloc((count_words(s, c) + 1) * sizeof(char *));
	i = 0;
	j = 0;
	if (!strs)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			strs[j++] = new_word(&s[i], c);
		i++;
	}
	strs[j] = NULL;
	return (strs);
}
