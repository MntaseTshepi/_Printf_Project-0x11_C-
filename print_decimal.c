#include "main.h"

/**
 * print_decimal - Gets the integer value
 * @number: The number parameter.
 * Return: The number.
 */

int print_decimal(int number)
{
	int int_count;
	char buffer[21];

	int_count = sprintf(buffer, "%d", number);
	write(1, buffer, int_count);

	return (int_count);
}
