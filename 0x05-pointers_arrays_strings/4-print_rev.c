#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_rev - Function to print string in reverse , then adds new line
 *
 * @s: argument of function
 *
 *Return: No return
 */

void print_rev(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	while (i >= 0)
	{
		putchar(s[i + 1]);
		i--;
	}
	putchar('\n');

}
