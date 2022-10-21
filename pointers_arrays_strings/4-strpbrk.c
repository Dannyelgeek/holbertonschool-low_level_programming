#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: string to be read.
 * @accept: string containing the characters to find.
 * Return: NULL if exited correctly.
 */

char *_strpbrk(char *s, char *accept)
{
	int len, src;

	for (len = 0; s[len] != '\0'; len++)
	{
		for (src = 0; accept[src] != '\0'; src++)
		{
			if (s[len] == accept[src])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}

