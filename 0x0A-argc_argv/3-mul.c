#include <stdio.h>
#include <stdlib.h>

/**
 *main - a program that multiplies two numbers
 *
 *@argc:Number of argument passed to the command line
 *@argv: Array of pointers to string argumnets
 *
 * Return: Always return 0
 */

int main(int argc, char *argv[])
{
	int i = 1, j = 2, mult;

	if (argc == 3)
	{
		mult = (atoi(argv[i]) * (atoi(argv[j])));
		printf("%d\n", mult);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
