#include "main.h"

/**
 * _printf - print function
 * @format: format.
 * by Confidence Aigbedion and Hicham Daoudi
 * Return: Printed Characters.
 */
int _printf(const char *format, ...)
{
	int cha_print = 0;
	va_list list_of_args;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(list_of_args, format);

	cha_print = format_string(format, args);

	va_end(args);

	return (cha_print);
}


/**
 * format_string - a function for processing the string
 * @format: format list
 * @args: number of arguments
 * Return: Number of characters
 */

int format_string(const char *format, va_list args)
{
	int i;
	int charnum = 0;

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			charnum++;
		}
		else if (format[i] == '%')
		{
			i++;
			if (format[i] == ' ' || format[i] == '\0')
			{
				va_end(args);
				return (-1);
			}
			else if (format[i] == '%')
			{
				charnum += handle_percent();
			}
			else
			{
				charnum += specifier_handler(format[i], format, &i,
						args);
			}
		}
	}

	return (charnum);
}
