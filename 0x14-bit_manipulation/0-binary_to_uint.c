#include "main.h"

/**
 *binary_to_uint - function that converts a binary number
 *to an unsigned int.
 *
 *@b: Char pointer to binary argument
 *
 *Return: return unsigned integer OR
 *zero(0) if unsuccesful
 */

unsigned int binary_to_uint(const char *b)
{
	int i;

	value = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] > '1' || b[i] < '0')
			return (0);
		value = 2 * value + (b[i] - '0');
	}
	return (value);
}
