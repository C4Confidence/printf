#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int _printf(const char *format, ...);
int print_percent(void);
int print_char(char c);
void print_string(char *str, int *count);

#endif
