#include "main.h"

/**
 * _printf - Function that produces output according to a format
 * @format: Character string composed of zero or more directives.
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	unsigned int j, value = 0, r_val, int_count = 0;
	char *s;
	va_list args;

	va_start(args, format);
	if (!format)
		return (-1);
	while (format[j] != '\0')
	{
		if (format[j] == '%' && format[j + 1] != '\0')
		{
			j++;
			if (format[j] != '%' || format[j] == 'c' || format[j] == 's')
			{
				if (format[j] == 'c')
				{
					value += __putchar(va_arg(args, int));
				}
				if (format[j] == 's')
				{
					s = va_arg(args, char *);
					if (!s)
					{
						s = "(null)";
					}
					value += get_string(s);
				}
				if (format[j] == '%')
				{
					value += __putchar('%');
				}
				else if (format[j + 1] == 'i' || format[j + 1] == 'd')
				{
					r_val = print_decimal(va_arg(args, int));
					j++;
					if (r_val == 0)
						int_count++;
					else
					{
						while (r_val != 0)
						{
							int_count++;
							r_val /= 10;
						}
					}
				}
			}
			else
			{
				value += __putchar('%');
				value += __putchar(format[j]);
			}
		}
		else
		{
			value += __putchar(format[j]);
		}
		j++;

	}
	va_end(args);
	return (value + int_count);
}
