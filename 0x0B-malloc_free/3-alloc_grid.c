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

	/* Allocate memory for the 2-dimensional array of integers */
	grid = (int **)malloc((height * width) * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	/* Initialize each element 0 */
	memset(grid, 0, (height * width));
	return (grid);
}
