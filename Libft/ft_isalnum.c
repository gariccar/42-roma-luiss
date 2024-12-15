//#include <stdio.h>
#include "ft_isdigit.c"
#include "ft_isalpha.c"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	else
		return (0);
}
/*
int	main()
{
	printf("%d\n", ft_isalnum('9'));
	printf("%d\n", ft_isalnum(65));
	printf("%d\n", ft_isalnum(52));
	printf("%d\n", ft_isalnum('H'));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum(67));
	printf("%d\n", ft_isalnum(33));
	printf("%d\n", ft_isalnum(166));
}*/
