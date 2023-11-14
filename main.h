#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int     _printf(const char *format, ...);
int     print_char(char c);
void    print_string(char *str, int *count);
void    print_numbers(long nb, int *count);
void    print_binary(unsigned int num, int *count);
void	print_hex_upper(unsigned int nb, int *count);
void	print_hex_lower(unsigned int nb, int *count);
void	print_dec(unsigned int nb, int *count);
void    print_octal(unsigned int num, int *count);

#endif
