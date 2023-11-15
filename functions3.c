#include "main.h"

/**
 * write_string - Prints ascii codes in hexa of non printable chars
 * @str: str
 * @count: counts
 * Return: Number of chars printed
 */
void write_string(const char *str, int *count)
{
	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			char hex[4];

			hex[0] = '\\';
			hex[1] = 'x';

			hex[2] = (*str >> 4) & 0xF;
			hex[2] += (hex[2] >= 10) ? 'A' - 10 : '0';

			hex[3] = *str & 0xF;
			hex[3] += (hex[3] >= 10) ? 'A' - 10 : '0';

			*count += write(1, hex, 4);
		} else
		{
			*count += print_char(*str);
		}
		str++;
	}
}

/**
 * write_adr - Prints the value of a pointer variable
 * @p: pointer
 * @count: counts
 * Return: Number of chars printed.
 */

void write_adr(unsigned long p, int *count)
{
	write(1, "0x", 2);
	*count += 2;
	print_hex_lower(p, count);
}
