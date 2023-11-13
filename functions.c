#include "main.h"


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