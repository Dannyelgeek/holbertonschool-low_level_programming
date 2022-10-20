#include "main.h"


/**
* *leet - changes the letters for numbers,
* @leet: character to check.
* Return: leet if exited correctly, non-zero otherwise.
*/

char *leet(char *leet)
{
	int c, d;

	char *a = "aAeEoOtTlL";
	char *n = "4433007711";

	for (c = 0; leet[c] != '\0'; c++)
	{
		for (d = 0; d < 10; d++)
		{
			if (leet[c] == a[d])
				leet[c] = n[d];
		}
	}
	return (leet);
}


