#include "libft.h"

size_t	wordcount(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
			i ++;
		else
		{
			while (s[i] != c && s[i] != 0)
				i ++;
			j ++;
		}
	}
	return (j);
}

char	*stralloc(char const *s, char c, size_t i)
{
	unsigned int	t;
	size_t			j;

	j = 0;
	t = i;
	while (s[i] != c && s[i] != 0)
	{
		i ++;
		j ++;
	}
	return (ft_substr(s, t, j));
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	**ptr;

	i = 0;
	j = 0;
	len = wordcount(s, c);
	ptr = malloc((len + 1) * 8);
	if (!ptr)
		return (NULL);
	while (j < len)
	{
		while (s[i] != 0 && s[i] == c)
			i ++;
		ptr[j] = stralloc(s, c, i);
		i += ft_strlen(ptr[j]);
		j ++;
	}
	ptr[j] = 0;
	return (ptr);
}
/*
int	main()
{
	char	**result;

	result = ft_split(" cazzo come  sei bello", ' ');
	while (*result)
	{
		printf("%s\n", *result);
		result	++;
	}
}*/
