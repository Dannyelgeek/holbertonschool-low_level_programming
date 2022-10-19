#include "main.h"

/**
*  *_strcat -  prints a concatenate string.
* @src: character to check.
* @dest: sttring to concatenate.
* Return: dest if exited correctly, non-zero otherwise.
*/

char *_strcat(char *dest, char *src)
{
	int con, cat = 0, ten = 0;

	while (dest[cat] != '\0')
	{
		cat += 1;
	}

	while (src[ten] != '\0')
	{
		ten += 1;
	}

	for (con = cat; con < (cat + ten); con++)
	{
		*(dest + con) = *(src + (con - cat));
	}
	return (dest);
}
