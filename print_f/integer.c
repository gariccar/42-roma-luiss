#include "libft.h"

static int	ft_putbase(long int n, int base, char *str)
{
	int	l;	
	int	b;

	l = 0;
	if (n == 0)
		return (l);
	l = ft_putbase(n / base, base, str);
	b = n % base;
	str = str + b;
	write (1, str, 1);
	l ++;
	return (l);
}

static int	ft_putnbr_base(int nbr, char *base)
{
	long	n;

	n = nbr;
	if (n == 0)
	{
		write(1, "0", 1);
		return(1);
	}
	else
	{
		if (n < 0)
		{
			write(1, "-", 1);
			return(ft_putbase(-n, 10, base) + 1);
		}
		return (ft_putbase(n, 10, base));
	}
}

int	integer(va_list args)
{
	int	c;

	c = va_arg(args, int);
	return (ft_putnbr_base(c, "0123456789"));
}
