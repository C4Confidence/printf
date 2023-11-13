#include "main.h"

/**
 * print_percent - Prints a percent sign
 * Return: Number of chars printed
 */

int print_percent(void)
{
	write(1, "%%", 1);
	return (1);
}


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
