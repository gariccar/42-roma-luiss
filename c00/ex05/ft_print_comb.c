#include <unistd.h>

void	marcello(char x)
{
	char	y;
	char	z;

	y = '0';
	while (y <= '9')
	{
		z = '0';
		while (z <= '9')
		{
			if (x < y && y < z)
			{
				write(1, &x, 1);
				write(1, &y, 1);
				write(1, &z, 1);
				if (x != '7' )
					write(1, ", ", 2);
			}
			z++;
		}
		y++;
	}
}

void	ft_print_comb(void)
{
	char	x;

	x = '0';
	while (x <= '9')
	{
		marcello(x);
		x++;
	}
	write (1, "\n", 1);
}
/*
int	main ()
{
	ft_print_comb();
}
*/
