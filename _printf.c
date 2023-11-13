#include "main.h"

/**
 * _printf - Prints characters
 * A group project by Aigbedion Confidence and Hicham Daoudi
 *
 * Return: Printed Characters c s %
*/

int _printf(const char *format, ...)
{
	int i;
	int count;
	va_list arg_list;

	i = 0;
	count = 0;
	va_start(arg_list, format);
	while (format[i])
	{
		if (format[i] != '%')
			count += print_char(format[i]);
		else if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				count += print_char(va_arg(arg_list, int));
			else if (format[i] == '%')
				count += print_percent();
			else if (format[i] == 's')
				print_string(va_arg(arg_list, char *), &count);
		}
		i++;
	}
	va_end(arg_list);
	return (count);
}