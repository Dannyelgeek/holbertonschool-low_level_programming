#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: the index where value is located.
*/

int binary_search(int *array, size_t size, int value)
{
	size_t ind, left, right;

	if (!array)
		return (-1);

	for (left = 0; right = size - 1; right >= left)
	{
			printf("Searching in array: ");
			for (ind = left; ind < right; ind++)
				printf("%d, ", array[ind]);
			printf("%d\n", array[ind]);

			ind = left + (right - left) / 2;
			if (array[ind] == value)
				right = ind - 1;
			else
				left = ind + 1;
	}
	return (-1);
}
