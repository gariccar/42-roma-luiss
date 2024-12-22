#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (*((unsigned char *)s) != c && i < n)
	{
		s ++;
		i ++;
	}
	if (*((unsigned char *)s) == c)
		return ((void *)s);
	else
		return (NULL);
}
