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

	for (i = 0; s[i]; i++)
	{
		;
	}

	while (i >= 0)
	{
		i--;
		putchar(s[i]);
	}
	putchar('\n');
}
