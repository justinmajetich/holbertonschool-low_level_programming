#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - initialize 2D array
 * @width: array width
 * @height: array height
 *
 * Return: pointer to 2D array on Success, NULL on Fail
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* check if dimensions 1 or greater */
	if (width < 1 || height < 1)
		return (NULL);

	/* allocate memory for grid (pointer to pointer) */
	grid = malloc(sizeof(*grid) * height);
	if (grid == NULL)
		return (NULL);

	/* allocate memory for *grid (pointer to int) */
	for (i = 0; i < width; i++)
	{
		*(grid + i) = malloc(sizeof(int) * width);
		if (*grid == NULL)
			return (NULL);
	}

	/* initialize all elements to 0 */
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	return (grid);
}
