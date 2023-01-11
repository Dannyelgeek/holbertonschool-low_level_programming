#include "search_algos.h"

/**
 *  jump_search - searches for a value in a sorted array of integers.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: the first index where value is located.
*/

int jump_search(int *array, size_t size, int value)
{
	size_t ind = 0, jump = 0, j_step;

	if (!array)
		return (-1);

	j_step = sqrt(size);
	while (jump < size && array[jump] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		ind = jump;
		jump += j_step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", ind, jump);
	if (jump >= size)
		jump = size - 1;

	while (ind < jump && array[ind] < value)
	{
		printf("Value checked array[%ld] = [%ld]\n", ind, jump);
		ind += 1;
	}
	printf("Value checked array[%ld] = [%d]\n", ind, array[ind]);
	return (array[ind] == value);
}
