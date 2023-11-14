#include "main.h"

/**
 * print_char - Prints a charar
 * @c: character
 * Return: Number of chars printed
 */
int print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * print_string - Prints a string
 * @str: str
 * @count: counts
 * Return: Number of chars printed
 */

void print_string(char *str, int *count)
{
	int i;

	i = 0;
	if (!str)
		str = "(null)";
	while (str[i])
	{
		i++;
		*count += 1;
	}
	write(1, str, i);
}

/**
 * print_numbers - Print int
 * @nb: number
 * @count: counts
 * Return: Number of chars printed
 */

void print_numbers(long nb, int *count)
{
	char	c;

	if (nb < 0)
	{
		nb = nb * (-1);
		write(1, "-", 1);
		*count += 1;
	}
	if (nb < 10)
	{
		c = nb + '0';
		write(1, &c, 1);
		*count += 1;
	}
	else
	{
		print_numbers(nb / 10, count);
		print_numbers(nb % 10, count);
	}
}

/**
 * print_binary - Prints an unsigned number
 * @num: number
 * @count: counts
 * Return: Numbers of char printed.
 */

void print_binary(unsigned int num, int *count)
{
	if (num > 1)
	{
		print_binary(num / 2, count);
	}
	*count += print_char('0' + num % 2);
}
