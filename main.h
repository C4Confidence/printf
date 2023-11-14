#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

int write_char(char c);
int write_str(char *str);
int _printf(const char *format, ...);

#endif