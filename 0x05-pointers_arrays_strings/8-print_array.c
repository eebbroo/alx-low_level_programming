#include "main.h"
#include <stdio.h>

/**
 * print_array - Function to print elements of an array of int.
 *
 * @a: input array.
 * @n: n elements
 *
 * Return: Non
 */
void print_array(int *a, int n)
{
	int index = 0;

	while (index < n)
	{
		printf("%d", *(a + index));
		index++;
		if (index != n)
			printf(", ");
	}
	printf("\n");
}

