#include "main.h"

/**
 * _printf - Function that produces output according to a format
 * @format: Character string composed of zero or more directives.
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	unsigned int j, value = 0, r_val, int_count = 0;
	va_list args;

	va_start(args, format);
	if (!format)
		return (-1);
	for (j = 0; format[j] != '\0'; j++)
	{
		if (format[j] != '%')
			__putchar(format[j]);
			value += 1;
		else if (format[j + 1] == 'c')
			__putchar(va_arg(args, int));
			j++;
			value += 1;
		else if (format[j + 1] == 's')
			r_val = get_string(va_arg(args, char *));
			j++;
			value += (r_val - 1);
			value += 1;
		else if (format[j + 1] == '%')
			__putchar('%');
			j++;
			value += 1;
		else if (format[j + 1] == 'i' || format[j + 1] == 'd')
		{
			r_val = print_decimal(va_arg(args, int));
			j++;
			if (r_val == 0)
				int_count++;
			else
			{
				while (r_val != 0)
					int_count++;
					r_val /= 10;
			}
		}
	}
	va_end(args);
	return (value + int_count);
}
