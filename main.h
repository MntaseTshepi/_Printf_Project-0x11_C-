#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int __putchar(char c);
int get_string(char *string);
int print_decimal(int number);

#endif
