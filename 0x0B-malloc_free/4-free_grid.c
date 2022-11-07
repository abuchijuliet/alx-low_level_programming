#include "main.h"

/**
 * free_grid - allocates a grid, make space and free space
 * @grid: the grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
