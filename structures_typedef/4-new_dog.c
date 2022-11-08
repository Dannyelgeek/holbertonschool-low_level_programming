#include "dog.h"
#include <stdlib.h>

/**
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *lucky;

	lucky = malloc(sizeof(dog_t));
	if (lucky == NULL)
		return (NULL);
	lucky->name = name;
	lucky->age = 2;
	lucky->owner = owner;
	return (lucky);
}

