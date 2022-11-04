#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array.
 * @nmemb: elements of the array.
 * @size: bytes size.
 * Return: point if exited correctly
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *point;
	unsigned int len;

	if (nmemb == 0 || size == 0)
		return (NULL);

	point = malloc(size * nmemb);

	if (point == NULL)
		return (NULL);

	for (len = 0; len < nmemb * size; len++)
		*((char *)point + len) = 0;

	return (point);
}

