#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = malloc(ft_strlen((char *)s + 1));
	while (s[i] != 0)
	{
		ptr[i] = s[i];
		i ++;
	}
	ptr[i] = 0;
	return (ptr);
}
/*
int	main()
{
	printf("%s\n", ft_strdup("sono una principessa"));
}*/
