#include "main.h"

/**
*  *_strcat -  prints a concatenate string.
* @src: character to check.
* @dest: sttring to concatenate.
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

