#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: 0 if s1 and s2 are equals, another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int index, check;

	for (index = 0; s1[index] && s2[index] != '\0'; index++)
{
	if (s1[index] != s2[index])
	{
		check = s1[index] - s2[index];
		break;
	}
	else if (s1[index] == s2[index])
	{
		return (0);
	}
}
return (check);
}
