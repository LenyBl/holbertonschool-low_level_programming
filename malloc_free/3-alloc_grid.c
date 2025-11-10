#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 *
 *
 *
 */
int **alloc_grid(int width, int height)
{
	int **grid;

	int i;

	if (width <= 0 && height <= 0)
	{
		return (NULL);
	}

	grid = malloc((width * height) * sizeof(int));

	for (i = 0; i < width * height; i++)
	{
		grid[i] = 0;
	}

	for (i = 0; i < width; i++)
	{
		int j;

		for (j = 0; j < height; j++)
		{
			grid[j] = 0;
		}
	}

	free(grid);
	return (grid);
}