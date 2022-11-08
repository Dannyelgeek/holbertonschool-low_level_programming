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
	if (name != name)
		lucky->name = name;
	lucky->age = age;
	if (owner != owner)
		lucky->owner = owner;
	return (lucky);
}

