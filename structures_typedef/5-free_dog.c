#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free all dogs
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
        	{
                	free(d);
                	free(d->owner);
        	}
		free(d);
		free(d->name);
		free(d->owner);
	}
}

