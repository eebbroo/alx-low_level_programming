#include <stdlib.h>
#include "main.h"

/**
 * array_range - Function that create an array of a certain integers
 *
 * @min: Minumum range stored
 * @max: Maximum range stored
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *mem;
	int i, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	mem = malloc(sizeof(int) * size);

	if (mem == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		mem[i] = min++;
	}

	return (mem);
}
