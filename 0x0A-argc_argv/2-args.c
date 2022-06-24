#include <stdio.h>
#include <stdlib.h>

/**
 *main - A program that prints all arguments it receives
 *
 *@argc: Number or arguments passed
 *@argv: Array of pointers to string arguments
 *
 * Return: Always return 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
