#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Function to find
 * length of a string.
 *
 * @s: string parameter.
 *
 * Return: length of a string.
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
	{
		return ('\0');
	}
	else if (*s != '\0')
	{
		len = (1 + _strlen_recursion(s + 1));
	}
	return (len);
}
