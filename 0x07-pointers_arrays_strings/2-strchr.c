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

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		else
		{
			break;
		}
	}
	return('\0');
}

int main(void)
{
    char *s = "helclo";
    char *f;

    f = _strchr(s, 'c');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}
