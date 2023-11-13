#include "main.h"
/**
 * print_char - Prints a character
 * 
 */

int print_percent(void)
{
	write(1, "%%", 1);
	return (1);
}

int print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

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
