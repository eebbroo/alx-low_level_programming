#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Function that prints a string, followed by a new line.
 *
 * @s: Pointer to string parameter.
 *
 * Return: No return
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
		return;
	else if (*s == '\0')
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
