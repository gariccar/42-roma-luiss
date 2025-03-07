#include "libft.h" 
#include "printf_utils.h"

int	ft_switch(const char *format, int i, int *num,  va_list args)
{
		if (format[i] == 'c')
			*num += character(args);
		else if (format[i] == 's')
			*num += string(args);
		else if (format[i] == 'p')
			*num += pointer(args);
		else if (format[i] == 'd' || format[i] == 'i')
			*num += integer(args);
		else if (format[i] == 'u')
			*num += unsignedint(args);
		else if (format[i] == 'x')
			*num += exad(args);
		else if (format[i] == 'X')
			*num = Exad(args);
		else if (format[i] == '%')
			write(1, &format[i], 1);
		else
		{
			i --; 
			write(1, &format[i], 1);
		}
		return (i);
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

			i = ft_switch(format, i, &num, args);
		}
		else
		{
			write(1, &format[i], 1);
			num ++;
		}
		i ++;
	}
	va_end(args);
	return (num);
}

