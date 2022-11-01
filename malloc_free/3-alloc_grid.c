#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid.
 * @height: height of the grid.
 * Return: a if exited correctly.
*/

int **alloc_grid(int width, int height)
{
	int x;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);
	
	for (x = 0; x < height; x++)
	{
		a[x] = malloc(sizeof(int) * width);

		if (a[x] == NULL)
		{
			while (x >= 0)
			{
				free(a[x]);
				x--;
			}
			free(a);
			return (NULL);
		}
	}
	return (a);
}

