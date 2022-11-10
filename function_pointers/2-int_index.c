#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index -  searches for an integer.
 * @array: array´s pointer.
 * @size: array´s elements.
 * @cmp: function´s pointer to compare values.
 * Return: ind if exited correctly.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int ind;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (ind = 0; ind < size; ind++)
	{
		if (cmp(*(array + ind)))
			return (ind);
	}

	return (-1);
}

