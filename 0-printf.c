#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _0-printf - print function
 * @format: format.
 * by Confidence Aigbedion and Hicham Daoudi
 * Return: Printed Characters.
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, cha_print = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format [i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer [buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			/* write(q, &format[i], 1);*/
			cha_print++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			printed = handle_print(format, &i, list, buffer,
					flags, width, precision, size);
			if (printed == -1)
				return (-1);
			cha_print += printed;
		}
	}
	print_buffer(buffer, &buff_ind);

	va_end(list);

	return (cha_print);
}

/**
 * print_buffer - prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the lenght.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);
	*buff_ind = 0;
}
