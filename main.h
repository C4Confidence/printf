#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

<<<<<<< HEAD
typedef struct format
{
	char *id;
	int  (*f)();
} match;


int _strlen(char *str);
int _strlenc(const char *str);
int printf_string(va_list val);
int printf_char(va_list val);
int _putchar(char c);
int print_37(void);
int print_int(va_list args);
int print_bina(va_list val);
int print_d(va_list args);
int _printf(const char *format, ...);
int binary (int num);
int octal(int num);
=======
int     _printf(const char *format, ...);
int     print_char(char c);
void    print_string(char *str, int *count);
void    print_numbers(long nb, int *count);
void    print_binary(unsigned int num, int *count);
void	print_hex_upper(unsigned int nb, int *count);
void	print_hex_lower(unsigned int nb, int *count);
void	print_dec(unsigned int nb, int *count);
void    print_octal(unsigned int num, int *count);
void    write_string(const char *str, int *count);
void	write_adr(unsigned long p, int *count);
>>>>>>> 55036496ccb5fc2f6a7ecfe170d5b2d64b40b2e3

#endif
