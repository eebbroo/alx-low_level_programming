#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, n;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	for (n = 65; n < 91; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
