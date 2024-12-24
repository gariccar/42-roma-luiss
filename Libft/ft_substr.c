#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		j;
	char		*ptr;

	j = 0;
	ptr = ft_calloc(len + 1, 1);
	if (!ptr)
		return (NULL);
	while (j < len)
	{
		ptr[j] = s[start];
		start ++;
		j ++;
	}
	return (ptr);
}
/*
int	main()
{
	printf("%s\n", ft_substr("ciao bel ragazzo", 5, 3));
}*/
