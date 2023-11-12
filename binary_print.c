#include "main.h"
/**
 *  * print_int - print the digit the specifier %d or %i
 *   * @args: the argument passed
 *    * Return: number of digit printed
 */
int print_int(va_list args)
{
	int len = 1, check, digit, sign = 0;
	long int num;
	long int tempnum;

	tempnum = va_arg(args, int);
	if (tempum < 0)
	{
		_putchar('-');
		num = (long int)(tempnum * -1);
		sign = 1;
	}
	else
		num = (long int)tempnum;
	len = _numlen(num);
	check = _pow(10, len);
	while (check /= 10)
	{
		digit = (num / check) % 10;
		_putchar(digit + '0');
	}
	return (len + sign);
}
