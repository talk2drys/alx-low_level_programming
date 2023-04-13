#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */

int **alloc_grid(int width, int height)
{
	int **grid;

	/* Return NULL if width or height is 0 or negative */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for the array of pointers to rows */
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	/* Allocate memory for each row */
	for (int i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (int j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}

	/* Initialize each element to 0 */
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
