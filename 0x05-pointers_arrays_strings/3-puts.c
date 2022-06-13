#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *_puts- a function that prints a particular string.
 *
 *@str: string to pass as argument.
 *
 *Return: No return.
 */


void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar ('\n');
}
