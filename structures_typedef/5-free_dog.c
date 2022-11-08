#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_dog - free all dogs
 * @d: dog´s data.
*/

void free_dog(dog_t *d)
{
	if (d->name != NULL && d != NULL)
		free(d->name);
	if (d->owner != NULL && d != NULL)
		free(d->owner);
	if (d != NULL)
		free(d);
}

