#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that prints its name, followed by a new line
 *
 *@argc: The number of parameters passed on the command line
 *@argv: An array of pointers to a string parameter
 *
 *Return: Always (return 0).
 */

int main(int argc, char *argv[])
{
	if (argc)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
