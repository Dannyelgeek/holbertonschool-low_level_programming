#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: the first index where value is located.
*/

int linear_search(int *array, size_t size, int value)
{
	size_t ind = 0;

	if (!array)
		return (-1);

	for (ind = 0; ind < size; ind++)
	{
		printf("Vaule checked array[%lu] = [%d]\n", ind, array[ind]);
		if (array[ind] == value)
			return (ind);
	}
	return (-1);
}
