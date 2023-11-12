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


	while (*format)
	{
		if (*format != 'c')
		{
			write(1, format, 1);
			cha_print++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == 'c')
			{
				char c = va_arg(list_of_args, int);
				write(1, &c, 1);

				cha_print++;

			}
		format++;
	}
	va_end(list_of_args);
	return (cha_print);
}
