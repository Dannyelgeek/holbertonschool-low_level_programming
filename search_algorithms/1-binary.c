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
	size_t ind = 0, left = 0, middle = 0, right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		middle = (right + left) / 2;
		ind = left;

		printf("Searching in array: ");

		for (; ind <= right; ++ind)
		{
			if (ind != left)
				printf(", %d", array[ind]);
			else
				printf("%d", array[ind]);
		}

		printf("\n");

		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}

	return (-1);
}