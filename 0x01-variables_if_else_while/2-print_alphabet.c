#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints alphabets in lowercase
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i <= 25; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
