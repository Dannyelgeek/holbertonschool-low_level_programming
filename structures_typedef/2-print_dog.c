#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints dog´s data.
 * @d: dog´s data.
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			prinf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age != NULL)
                        prinf("Name: (nil)\n");
                else
                        printf("Name: %.1f\n", d->age);
		if (d->owner != NULL)
                        prinf("Name: (nil)\n");
                else
                        printf("Name: %s\n", d->owner);
	}
}
