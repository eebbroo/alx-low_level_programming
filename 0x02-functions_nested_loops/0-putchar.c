#include "main.h"

/**
 * main - Program that prints _putchar to the standardoutput
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char arr[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int a;

	for (a = 0; a < 9; a++)
	{
		_putchar(arr[a]);
	}
	_putchar('\n');
	return (0);
}
