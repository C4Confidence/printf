#include "main.h"

/**
 * _printf - Prints characters
 * A group project by Aigbedion Confidence and Hicham Daoudi
 * @format: format.
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
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
			count += print_char(format[i]);
		else if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				count += print_char(va_arg(arg_list, int));
			else if (format[i] == 's')
				print_string(va_arg(arg_list, char *), &count);
			else if (format[i] == 'd' || format[i] == 'i')
				print_numbers(va_arg(arg_list, int), &count);
			else if (format[i] == 'b')
				print_binary(va_arg(arg_list, unsigned int), &count);
			else if (format[i] == 'X')
				print_hex_upper(va_arg(arg_list, unsigned int), &count);
			else if (format[i] == 'x')
				print_hex_lower(va_arg(arg_list, unsigned int), &count);
			else if (format[i] == 'u')
				print_dec(va_arg(arg_list, unsigned int), &count);
			else if (format[i] == 'o')
				print_octal(va_arg(arg_list, unsigned int), &count);
			else if (format[i] == 'S')
				write_string(va_arg(arg_list, char *), &count);
			else if (format[i] == 'p')
				write_adr(va_arg(arg_list, unsigned long), &count);
			else if (format[i])
				count += print_char(format[i]);
		}
		if (format[i])
			i++;
	}
	va_end(arg_list);
	return (count);
}
