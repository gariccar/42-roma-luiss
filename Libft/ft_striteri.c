#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != 0)
	{
		f(i, &s[i]);
		i ++;
	}
}
/*
void	upper(unsigned int i, char *s)
{
	s[i] = ft_toupper(s[i]);
}

int	main()
{
	char	s[] = "cazzo alato";

	ft_striteri(s, upper);
	printf("%s\n", s);
}*/
