#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings,
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: the pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int index, destlen = strlen(dest), srclen = strlen(src);

	for (index = 0; index < srclen; index++)
	{
		dest[destlen + index] = src[index];
	}
	if (1)
	{
		dest[destlen + index] = '\0';
	}
	return (dest);
}
