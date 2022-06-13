#include "main.h"
#include <stdio.h>
/**
 * _strlen - function to return a string
 *
 *@s: string to be passed to function
 *
 * Return: return (c)
 */

int _strlen(char *s)
{
	int c = 0;
	
	while (s[c])
	{
		c++;
	}
	return (c);
}
