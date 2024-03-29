#include "main.h"
#include <stdlib.h>

/**
 * free_grid - 2D array.
 * @grid: input integer.
 * @height: input integer.
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
