#include "main.h"

/**
 * *_strchr - search the character of the array.
 * @s: pointer of the array.
 * @c: character to search.
 * Return: s if is correctly.
 */

char *_strchr(char *s, char c)
{
	int src;

	for (src = 0; s[src] >= '\0'; src++)
	{
		if (s[src] == c)
			return (s + src);
	}
	return ('\0');
}

