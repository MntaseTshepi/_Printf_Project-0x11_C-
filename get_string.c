#include "main.h"

/**
 * get_string - Function prints out a string.
 * @string: The string input.
 *
 * Return: Count
 */

int get_string(char *string)
{
	int i = 0;
	int count = 0;

	if (string == NULL)
	{
		string = "(null)";
		return (-1);
	}
	else if (string)
	{

		while (string[i] != '\0')
		{
			__putchar(string[i]);
			count += 1;
			i++;
		}
	}
	return (count);
}
