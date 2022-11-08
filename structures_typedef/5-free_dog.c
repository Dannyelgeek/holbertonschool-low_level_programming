#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_dog - free all dogs
 * @d: dog´s data.
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

