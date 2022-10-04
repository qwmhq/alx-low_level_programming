#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free memory occupied by a 2d grid
 * @grid: the 2d grid
 * @height: height of the 2d grid
 * Return: void
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
