#include "main.h"

/**
 * print_hex_upper - prints hexadecimal integer uppercase
 * @nb: number
 * @count: counts
 * Return: Number of chars printed
 */

void print_hex_upper(unsigned int nb, int *count)
{
	char	*hex;
	char	c;

	hex = "0123456789ABCDEF";
	if (nb < 16)
	{
		c = hex[nb];
		write(1, &c, 1);
		*count += 1;
	}
	else
	{
		print_hex_upper(nb / 16, count);
		print_hex_upper(nb % 16, count);
	}
}

/**
 * print_hex_lower - hexadecimal integer lowercase
 * @nb: number
 * @count: counts
 * Return: Number of chars printed
 */
void print_hex_lower(unsigned int nb, int *count)
{
	char	*hex;
	char	c;

	hex = "0123456789abcdef";
	if (nb < 16)
	{
		c = hex[nb];
		write(1, &c, 1);
		*count += 1;
	}
	else
	{
		print_hex_lower(nb / 16, count);
		print_hex_lower(nb % 16, count);
	}
}

/**
 * print_dec - Prints an unsigned number
 * @nb: number
 * @count: counts
 * Return: Number of chars printed
 */

void print_dec(unsigned int nb, int *count)
{
	char	c;

	if (nb < 10)
	{
		c = nb + '0';
		print_char(c);
		*count += 1;
	}
	if (nb > 9)
	{
		print_dec(nb / 10, count);
		print_dec(nb % 10, count);
	}
}

/**
 * print_octal - Prints an unsigned number in octal notation
 * @num: number
 * @count: counts
 * Return: Number of chars printed
 */
void print_octal(unsigned int num, int *count)
{
	if (num > 7)

		print_octal(num / 8, count);

	*count += print_char('0' + num % 8);
}
