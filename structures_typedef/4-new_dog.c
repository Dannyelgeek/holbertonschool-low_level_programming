#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - new dog´s data
 * @name: new dog´s name.
 * @age: new dog´s age.
 * @owner: new dog´s owner.
 * Return: lucky if exited correctly.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *lucky;
	int lenname = 0, lenowner = 0, copname, copowner;

	while (name[lenname] != '\0')
		lenname++;
	while (owner[lenowner] != '\0')
		lenowner++;

	lucky = malloc(sizeof(dog_t));
	if (lucky == NULL)
	{
		return (NULL);
	}
	lucky->name = malloc(lenname + 1);
	lucky->owner = malloc(lenowner + 1);
	if (lucky->name == NULL || lucky->owner ==NULL)
	{
		free(lucky);
		free(lucky->name);
		free(lucky->owner);
	}
	for (copname = 0; copname <= lenname; copname++)
		lucky->name[copname] = name[copname];
	for (copowner = 0; copowner <= lenowner; copowner++)
		lucky->owner[copowner] = owner[copowner];
	lucky->age = age;
	return (lucky);
}

