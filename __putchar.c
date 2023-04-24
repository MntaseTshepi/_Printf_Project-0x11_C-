#include "main.h"

/**
 * __putchar - writes character c to the stdout.
 * @c: The character to print.
 *
 * Return: 0 on success or -1 on error.
 */

int __putchar(char c)
{
	return (write(1, &c, 1));
}
