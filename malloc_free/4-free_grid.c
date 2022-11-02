#include "main.h"
#include <stdlib.h>

/**
 * free_grid - returns a pointer to a 2 dimensional array of integers.
 * @grid: the address of the two dimensional grid.
 * @height: height of the grid.
*/

void free_grid(int **grid, int height)
{
	int f;

	for(f = 0; f < height; f++)
	{
		free(grid[f]);
	}
	free(grid);
}

