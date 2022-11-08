#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free all dogs
*/

void free_dog(dog_t *d)
{
		free(d);
		free(d->name);
		free(d->owner);
}

