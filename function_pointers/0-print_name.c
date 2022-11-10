#include "main.h"
#include <stdlib.h>

/**
 * print_name - prints a nema.
 * @name: name to print.
 * @f: pointer´s function that prints a mane.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		f(name);
}

