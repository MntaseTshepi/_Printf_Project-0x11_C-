#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int _printf(const char *format, ...);
int __putchar(const char c);
int get_string(char *string);
int print_decimal(int number);
int print_percentage(void);
int print_args(const char *format, va_list args);


#endif
