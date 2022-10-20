#include "main.h"

/**
 * *cap_string - transform the first lowercase in uppercase.
 * @a: pointer of the array.
 * Return: a.
 */

char *cap_string(char *a)
{
	int i, j = 0, k;
	char b[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	while (a[j] != '\0')
	{
		j += 1;
	}

	for (i = 0; i < j; i++)
	{
		for (k = 0; k <= 12; k++)
		{
			if (a[i] == b[k])
			if (a[i + 1] >= 97 && a[i + 1] <= 122)
			a[i + 1] = a[i + 1] - 32;
		}
	}
	return (a);
}
