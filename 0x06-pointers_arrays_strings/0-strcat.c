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

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
