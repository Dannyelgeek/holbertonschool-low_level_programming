#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value
 * Return: point if exited correctly
*/

int *array_range(int min, int max)
{
	int *point, ind, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	point = malloc(sizeof(int) * size);

	if (point == NULL)
		return (NULL);

	for (ind = 0; ind < size; ind++)
		point[ind] = min++;

	return (point);
}

