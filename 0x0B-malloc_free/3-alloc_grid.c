#include <stdlib.h>
#include "main.h"
/**
 *alloc_grid - a function that returns a pointer to
 *a 2 dimensional array of integers
 *
 *@width:width array parameter
 *@height:height of array
 *
 *Return: return a pointer
 */

int **alloc_grid(int width, int height)
{
	int **mem;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	mem = malloc(height * sizeof(int *));
	if (mem == NULL)
	{
		free(mem);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		mem[i] = malloc(width * sizeof(int));
		if (mem[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(mem[i]);
			free(mem);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			mem[i][j] = 0;
	return (mem);
}
