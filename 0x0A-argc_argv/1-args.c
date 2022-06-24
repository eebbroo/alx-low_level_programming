#include <stdio.h>
#include <stdlib.h>

/**
 * main - Aprogram that prints the number of arguments passed into it
 *
 *@argc: Number of arguments passed
 *@argv: Array pointers to string parameters
 *
 * Return: Always return(0)
 */

int main(int argc, char *argv[])
{
	if (*argv)
	{
		printf("%d\n", (argc - 1));
	}
	return (0);
}
