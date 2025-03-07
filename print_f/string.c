#include "libft.h"

int	string(va_list args)
{
	char	*c;
	int	i;

	i = 0;
	c = va_arg(args, char *);
	if (c == 0)
	{
		write(1, "(null)", 6);
		return(6);
	}
	while (c[i] != 0)
	{
		write(1, &c[i], 1);
		i ++;
	}
	return(i);
}
