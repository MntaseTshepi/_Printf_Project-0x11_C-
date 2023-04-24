#include "main.h"

/**
 * print_decimal - Gets the integer value
 * @number: The number parameter.
 * Return: The number.
 */

int print_decimal(int number)
{
	int value = number;
	int digit[32];
	int i = 0;

	if (value < 0)
	{
		value = -value;
		__putchar('-');
	}
	while (value != 0)
	{
		digit[i++] = value % 10;
		value /= 10;
	}
	if (i == 0)
	{
		__putchar('0');
		return (0);
	}
	while (i > 0)
	{
		__putchar('0' + digit[--i]);
	}
	return (number);
}
