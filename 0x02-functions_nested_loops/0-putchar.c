#include "stdio.h"

/**
 * main - Program that prints Putchar to the standardoutput
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char arr[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(arr[a]);
	}
	putchar('\n');
	return (0);
}
