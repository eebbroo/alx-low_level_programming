#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - a function that concatenates two strings
 *
 * @s1: Destination string parameter
 * @s2: Source string parameter
 *
 *Return: return pointer to newly allocate space in memory
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *mem;

	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}
	mem = (char *)malloc(sizeof(char) * (i + j + 1));
	if (mem == NULL)
	{
		return (NULL);
	}
	for (k = 0; k <= i; k++)
	{
		mem[k] = s1[k];
	}
	for (l = 0; l <= j; ++i, l++)
	{
		mem[i] = s2[l];
	}
	mem[i + j + 1] = '\0';
	return (mem);
}
