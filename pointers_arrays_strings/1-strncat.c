#include "main.h"

/**
*  *_strncat -  prints a concatenate string.
* @src: character to check.
* @dest: sttring to concatenate.
* @n: array to limit.
* Return: dest if exited correctly, non-zero otherwise.
*/

char *_strncat(char *dest, char *src, int n)
{
	int con, cat = 0;

	while (dest[cat] != '\0')
	{
		cat += 1;
	}

	for (con = 0; con < n; con++)
	{
		dest[cat + con] = src[con];

		if (src[con] == '\0')
		{
			break;
		}
	}

	return (dest);
}

