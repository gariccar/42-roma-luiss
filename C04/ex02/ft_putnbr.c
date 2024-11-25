#include <unistd.h>

void	ft_putbase(long int n, int base, char *str)
{
	int	b;

	if (n == 0)
		return ;
	ft_putbase(n / base, base, str);
	b = n % base;
	str = str + b;
	write (1, str, 1);
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n == 0)
		write(1, "0", 1);
	else
	{
		ft_putbase(n, 10, "0123456789");
	}
}
/*
int	main(void)
{
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(-42);
	write(1, "\n", 1);
	
}*/
