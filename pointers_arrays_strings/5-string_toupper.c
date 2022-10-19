#include "main.h"

/**
 * string_toupper - transform the lowercase in uppercase:
 * @scr: pointer of the array.
 * Return: scr
 */

char *string_toupper(char *scr)
{
	int a = 0, u;

	while (scr[a] != '\0')
	{
		a += 1;
	}

	for (u = 0; u < a; u++)
	{
		if (scr[u] >= 'a' && scr[u] <= 'z')
		{
			scr[u] = scr[u] - 32;
		}
	}
	return (scr);
}

