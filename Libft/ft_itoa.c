#include "libft.h"

size_t	intlen(int n)
{
	size_t		i;
	long int	result;

	i = 0;
	result = n;
	if (n < 0)
	{
		i ++;
		result = -result;
	}
	while (result > 0)
	{
		result = result / 10;
		i ++;
	}
	return (i);
}

char	*strabs(int n, char *ptr)
{
	long int	result;
	size_t		t;

	t = intlen(n);
	result = n;
	if (n < 0)
	{
		ptr[0] = '-';
		result = -result;
	}
	while (result > 0)
	{
		ptr[t - 1] = result % 10 + '0';
		result = result / 10;
		t --;
	}
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	t;

	t = intlen(n);
	ptr = calloc(t + 1, 1);
	return (strabs(n, ptr));
}
/*
int	main()
{
	printf("itoa = %s\n", ft_itoa(1<<31));
	printf("itoa =  %s\n", ft_itoa(4));
	printf("itoa = %s\n", ft_itoa(8764));
}*/
