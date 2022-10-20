#include "main.h"

/**
 * *_memcpy - copy the memory area.
 * @src: pointer of the array.
 * @dest: character to copy
 * @n: length of the string
 * Return: s if is correctly.fills memory with a constant byte.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		dest[c] = src[c];

	return (dest);
}
