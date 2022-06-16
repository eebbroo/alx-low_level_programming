#include "main.h"
/**
 * _strncpy - copies a string
 *
 * @dest: destination string array
 * @src: source string
 * @n: amount of bytes from src.
 *
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; n > i && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
