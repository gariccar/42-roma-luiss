#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	ptr = ft_calloc((ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1), 1);
	if (!ptr)
		return (NULL);
	while (s1[i] != 0)
	{
		ptr[i] = s1[i];
		i ++;
	}
	while (s2[j] != 0)
	{
		ptr[i] = s2[j];
		i ++;
		j ++;
	}
	return (ptr);
}
/*
int	main()
{
	printf("%s\n", ft_strjoin("domani andiamo", " al supermercato"));
}*/
