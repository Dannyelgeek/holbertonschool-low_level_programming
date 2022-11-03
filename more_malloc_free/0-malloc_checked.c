#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  allocates memory using malloc.
 * @b: size of the memory. 
*/

void *malloc_checked(unsigned int b)
{
	char *point;

	point = malloc(sizeof(int) * b);

	if (point == NULL)
		exit(98);

	return(point);
}

