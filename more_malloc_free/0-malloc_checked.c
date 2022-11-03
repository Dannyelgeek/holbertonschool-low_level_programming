#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of the memory.
 * Return: point if exited correctly.
*/

void *malloc_checked(unsigned int b)
{
	char *point;

	point = malloc(sizeof(char) * b);

	if (point == NULL)
		exit(98);

	return (point);
}

