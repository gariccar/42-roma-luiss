#include "libft.h"

int	character(va_list args)
{
	char	c;
	c = va_arg(args, int);
	write(1, &c, 1);
	return (1);
}
