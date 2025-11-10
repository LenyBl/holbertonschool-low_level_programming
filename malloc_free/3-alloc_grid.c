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
	int *grid;

	int i;

	if (width <= 0 && height <= )
	{
		return (NULL);
	}
	

	grid = malloc(sizeof(int) * (width * height));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width * height; i++)
	{
		grid[i][i] = 0;
	}
	
	return (grid);


	
}