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

	for (n = 0; str[n] != '\0'; n++)
	{
		;
	}
	if (str == NULL)
	{
		return (NULL);
	}
	mem = malloc((n + 1) * sizeof(char));
	for (j = 0; j <= n; j++)
	{
		mem[j] = str[j];
	}
	if(*mem == *str)
		return (mem);
}
