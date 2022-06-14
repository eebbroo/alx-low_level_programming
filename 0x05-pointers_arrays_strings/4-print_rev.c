#include <stdio.h>
#include "main.h"

/**
 * print_rev- Function that prints in reverse
 *
 *@s: parameter to use.
 *
 *Return: return (i).
 */

void print_rev(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}

	while (i >= 0)
	{
		i--;
		putchar(s[i]);
	}
	putchar('\n');
}
