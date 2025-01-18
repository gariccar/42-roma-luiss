#include "libft.h"

size_t	ft_strtrim1(char const *s1, char const *set)
{
	size_t	j;
	size_t	i;

	j = 0;
	while (s1[j] != 0)
	{
		i = 0;
		while (s1[j] != set[i] && set[i] != 0)
			i ++;
		if (set[i] == 0)
			break ;
		else
			j ++;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	t;
	size_t	start;

	t = 0;
	start = ft_strtrim1(s1, set);
	if (s1[start] == 0)
		return (ft_strdup(""));
	while (s1[t] != 0)
		t ++;
	t --;
	while (t > 0)
	{
		i = 0;
		while (s1[t] != set[i] && set[i] != 0)
			i ++;
		if (set[i] == 0)
			break ;
		else
			t --;
	}
	return (ft_substr(s1, start, t - start + 1));
}
/*
int     main()
{
        printf("%s\n", ft_strtrim("abc cazzo vuoi abc", "abc "));
        printf("%s\n", ft_strtrim("abc cazzo vuoi abc", "c"));
        printf("%s\n", ft_strtrim("abc cazzo vuoi abc", "abc"));
        printf("%s\n", ft_strtrim("abc cazzo vuoi abc", "b"));
        printf("%s\n", ft_strtrim("abc cazzo vuoi abc", "cba"));
        printf("%s\n", ft_strtrim("abc cazzo vuoi abc", "ab"));
        printf("%s\n", ft_strtrim("abc cazzo vuoi abc", "abc cazzo vuoi abc"));
}
*/
