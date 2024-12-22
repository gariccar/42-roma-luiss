//#include <stdio.h>
//#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && ((unsigned char *)s1)[i] != 0)
	{
		if (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
		{
			i ++;
		}
		else
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
/*
int main ()
{
	printf("%d\n", ft_memcmp("banano", "banana", 6));
	//printf("%d\n", memcmp("banano", "banana", 6));
}*/
