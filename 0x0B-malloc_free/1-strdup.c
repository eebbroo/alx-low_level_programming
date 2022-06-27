#include <stdio.h>
#include "main.h"
#include <stdlib>

/**
 *create_array - function that creates an array of chars,
 *and initializes it with a specific char.
 *
 *@size: size or the array.
 *@c: Array of characters
 *
 *Return: Return NULL if size is zero
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
	return (create_array);
	free(array);
}

