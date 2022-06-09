#include "main.h"

/**
 *main - function that prints the numbers, from 0 to 9, followed by a new line
 *
 *Return: Nill 
 */

void print_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
}
