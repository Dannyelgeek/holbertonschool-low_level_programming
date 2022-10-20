#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: ointer of the array.
 * @b: character to change
 * @n: length of the string
 * Return: s if is correctly.fills memory with a constant byte.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		s[m] = b;

	return (s);
}
