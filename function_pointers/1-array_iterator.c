#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator -  executes a function given as a 
 * parameter on each element of an array.
 * @array: the array.
 * @size: array´s size.
 * @action: function´s pointer to be executed.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned ind;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (ind = 0; ind < size; ind++)
			action(array[ind]);
	}
}

