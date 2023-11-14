#include "main.h"

/**
 * write_char - Prints a character
 * @c: character
 * Return: Number of chars printed
 */
int write_char(char c)
{
	return (write(1, &c, 1));
}


/**
 * write_str - Prints a string
 * @str: str
 * Return: Number of chars printed
 */

int write_str(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (write(1, str, len));
}


/**
 * _printf - Prints characters
 * A group project by Aigbedion Confidence and Hicham Daoudi
 * @format: format.
 * Return: Printed Characters c s %
*/

int _printf(const char *format, ...)
{
	int count = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case 'c': {
					char ch = va_arg(args, int);

					count += write_char(ch);
					break;
				}
				case 's': {
					char *str = va_arg(args, char*);

					count += write_str(str);
					break;
				}
				case '%':
					count += write_char('%');
					break;
				default:
					break;
			}
		} else
		{
			count += write_char(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
