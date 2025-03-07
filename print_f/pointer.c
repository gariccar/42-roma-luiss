#include <libft.h>

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

static int	ft_putnbr_base(void *c, char *base)
{
	long	n;
	
	n = (long)c;
	if (n == 0)
	{
		write(1, "(nil)", 5);
		return(5);
	}
	else
	{
		write(1, "0x", 2);
		return (ft_putbase(n, 16, base) + 2);
	}
}

int	pointer(va_list args)
{
	void	*c;

	c = va_arg(args, void *);
	return (ft_putnbr_base(c, "0123456789abcdef"));
}
