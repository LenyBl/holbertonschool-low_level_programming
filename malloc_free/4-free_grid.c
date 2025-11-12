#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 *
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		if (i == height)
		{
			free(grid[i]);
		}
	}
}
