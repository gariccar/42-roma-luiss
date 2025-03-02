#include "libft.h" 




int	ft_printf(const char *format, ... )
{
	va_list	args;
	int	i;

	i = 0;
	while (format[i] != '\0' && format[i] != '%')
	{
		write(1, format[i], 1);
		i ++;
	}
	if (format[i] == '%')
	{
		i++;
		if (format[i] == 'c')
			character();
		else if (format[i] == 's')
			string();
		else if (format[i] == 'p')
			pointer();
		else if (format[i] == 'd' || format[i] == 'i')
			integer();
		else if (format[i] == 'u')
			unsignedint();
		else if (format[i] == 'x')
			exad();
		else if (format[i] == 'x')
			Exad();
		else if (format[i] == '%')
			write(1, format[i], 1);
		else 
		{
			while (format[i] != 0)
			{
				write(1, format[i], 1);
				i ++;
			}
		}
	}

}


int	main()
{
	printf("cazzo%razzo\n");
}
