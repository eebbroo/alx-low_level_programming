#include "main.h"
#include <stdlib.h>

/**
 * free_grid -  Frees Memory allocated for grid
 *
 * @grid: grid to be freed
 * @height: Height of the grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
