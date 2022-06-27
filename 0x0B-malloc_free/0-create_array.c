#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *create_array - function that creates an array of chars,
 *and initializes it with a specific char.
 *
 *@size: size of the array.
 *@c: Array of characters
 *
 *Return: Return pointer of type char.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(size * sizeof(c));

	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}
	return (array);
	free(array);
}
