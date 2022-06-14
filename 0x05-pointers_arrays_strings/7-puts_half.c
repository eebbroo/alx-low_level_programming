#include <stdio.h>
#include "main.h"

/**
 * puts_half - Funtion prints half of a string.
 *
 * @str: input string.
 *
 * Return: Non
 */

void puts_half(char *str)
{
	int a = 0, i;

	while (a >= 0)
	{
		if (str[a] == '\0')
			break;
		a++;
	}

	if (a % 2 == 1)
		i = a / 2;
	else
		i = (a - 1) / 2;

	for (i++; i < a; i++)
		putchar(str[i]);
	putchar('\n');
}
