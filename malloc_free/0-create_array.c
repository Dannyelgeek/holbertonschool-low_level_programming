#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: chars of the array
 * Return: s if exited correctly, NULL otherwise.
*/

char *create_array(unsigned int size, char c)
{
	unsigned int str;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (str = 0; str < size; str++)
	{
		s[str] = c;
	}

	return (s);
}

