#include "main.h"

/**
 * _printf - Prints characters
 * A group project by Aigbedion Confidence and Hicham Daoudi
 * 
 * Return: Printed Characters c s %
*/

int _printf(const char *format, ...)
{
    int i;
    int count;
    va_list arg_list;

	i = 0;
    count = 0;
    va_start(arg_list, format);