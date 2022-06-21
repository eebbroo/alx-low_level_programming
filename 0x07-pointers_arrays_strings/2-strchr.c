#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: string.
 * @c: character.
 *
 * Return: the pointer to the first occurrence of the character c.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; *s != '\0'; i++)
	{
		if (*s == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
