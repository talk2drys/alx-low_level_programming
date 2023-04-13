#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the memory allocate for the grid
 * created by alloc_grid()
 * @grid: grid to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL)
		return;

	for (int i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
			free(grid[i]);
	}

	free(grid);
}
