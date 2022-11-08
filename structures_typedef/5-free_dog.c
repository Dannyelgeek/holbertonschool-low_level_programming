#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free all dogs
*/

void free_dog(dog_t *d)
{
	if (d->name != NULL && d != NULL)
		free(d->name);
	if (d->owner != NULL && d != NULL)
		free(d->owner);
	if (d == NULL)
		free(d);
}

