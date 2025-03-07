#include "libft.h"

int	string(va_list args)
{
	char	*c;
	int	i;

	i = 0;
	c = va_arg(args, char *);
	while (c[i] != 0)
	{
		write(1, &c[i], 1);
		i ++;
	}
	return(i);
}
