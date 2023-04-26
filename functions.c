#include "main.h"

/**
 * print_percentage - function that prints %
 * Return: (1) if successful
 */

int print_percentage(void)
{
	__putchar('%');
	return (1);
}

/**
 * print_args - Function prints arguments
 * @format: Format string
 * @args: Args list
 * Return: arguements
 */

int print_args(const char *format, va_list args)
{
	switch (*format)
	{
		case 'c':
			return (__putchar(va_arg(args, int)));
		case 's':
			return (get_string(va_arg(args, char *)));
		case 'd':
		case 'i':
			return (print_decimal(va_arg(args, int)));
		case '%':
			return (print_percentage());
		default:
			return (__putchar('%') + __putchar(*format));
	}
}
