#ifndef PRINTF_UTILS_H
# define PRINTF_UTILS_H

# include <stdarg.h>

int character(va_list args);
int string(va_list);
int	pointer(va_list);
int integer(va_list);
int unsignedint(va_list);
int exad(va_list);
int Exad(va_list);

#endif
