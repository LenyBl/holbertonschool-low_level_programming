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

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}

		int j;

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}