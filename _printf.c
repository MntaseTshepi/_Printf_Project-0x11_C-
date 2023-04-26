#include "main.h"

/**
 * _printf - Function that produces output according to a format
 * @format: Character string composed of zero or more directives.
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int value_count = 0;

	if (!format)
		return (-1);
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			value_count += __putchar(*format);
		}
		else
		{
			format++;
			if (*format == '\0')
			{
				return (-1);
			}
			value_count += print_args(format, args);
		}
		format++;
	}
	va_end(args);
	return (value_count);
}
