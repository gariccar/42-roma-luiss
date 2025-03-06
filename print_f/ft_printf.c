#include "libft.h" 


int	ft_switch(const char *format, int i, int *num,  va_list args)
{
		if (format[i] == 'c')
			*num += character(format, args);
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
		else if (format[i] == 'X')
			Exad();
		else if (format[i] == '%')
			write(1, &format[i], 1);
		else
		{
			i --; 
			write(1, &format[i], 1);
		}
		return (i)
}



int	ft_printf(const char *format, ... )
{
	va_list	args;
	int num;
	int	i;

	va_start(args, format);
	i = 0;
	num = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i ++;
			i = ft_switch(format, i, &num, args)
		}
		else
		{
			write(1, &format[i], 1);
			num ++;
		}
		i ++;
	}
	return ();
}

