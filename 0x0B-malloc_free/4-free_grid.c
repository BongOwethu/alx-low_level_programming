#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Frees the 2D array
 * @grid: 2D grid
 * @height: Height of grid
 * Description: Frees memory of the grid created
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
