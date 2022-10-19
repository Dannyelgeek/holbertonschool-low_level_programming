#include "main.h"

/**
*  *_strcpy -  prints a copy of the string.
* @src: character to check.
* @dest: sttring to copy.
* Return: dest if exited correctly, non-zero otherwise.
*/

char *_strcpy(char *dest, char *src)
{
	int lec = 0, cop = 0;

	while (src[lec] != '\0')
	{
		lec += 1;
	}

	for (cop = 0; cop < lec; cop++)
	{
		dest[cop] = src[cop];
	}
	dest[cop] = '\0';

	return (dest);
}
