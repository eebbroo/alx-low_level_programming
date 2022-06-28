#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *_strdup - A function that returns a pointer to a
 *newly allocated space in memory, which contains a
 *copy of the string given as a parameter.
 *
 *@str: string argument
 *
 *Return: Return a pointer to newly allocated space in memory.
 */

char *_strdup(char *str)
{
	char *mem;
	unsigned int n, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n] != '\0'; n++)
	{
		;
	}
	mem = (char *)malloc((n + 1) * sizeof(char));
	if (mem == NULL)
		return (NULL);
	for (j = 0; j <= n; j++)
	{
		mem[j] = str[j];
	}
	return (mem);
}
