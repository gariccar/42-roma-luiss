#include "libft.h"

size_t	lentrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	l;

	j = 0;
	l = 0;
	while (set[j] != 0)
	{
		i = 0;
		while (s1[i] != 0)
		{
			if (s1[i] == set[j])
				l ++;
			i ++;
		}
		j ++;
	}
	return (l);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*ptr;

	i = 0;
	k = 0;
	ptr = calloc((ft_strlen((char *)s1) - lentrim(s1, set) + 1), 1);
	while (s1[i] != 0)
	{
		j = 0;
		while (set[j] != 0)
		{
			if (s1[i] != set[j])
				j ++;
			else
				i ++;
		}
		ptr[k] = s1[i];
		i ++;
		k ++;
	}
	return (ptr);
}
/*
int main()
{
	printf("%s\n", "sempre stati stanchi");
	printf("%s\n", ft_strtrim("sempre stati stanchi", "str"));
}*/
