#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

#endif
