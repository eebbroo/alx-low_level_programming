#include <stdio.h>
#include "main.h"

/**
 *puts2 - Funtion that prints any other character from string
 *
 *@str: parameter used
 *
 * Return: No return
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		putchar (str[i]);
	}
	putchar('\n');
}
